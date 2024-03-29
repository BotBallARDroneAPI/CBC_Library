// ARDroneAPI.cpp

#include "ARDroneAPI.h"
#include "Controller.h"
#include "compat.h"
#include "process.h"
#include "Drone.h"

#include <math.h>
#include <fcntl.h>

using namespace ARDrone;
using namespace std;

#define	LOCKED 1
#define UNLOCKED 0

/**
 @brief The supported movement types
 **/
enum movement_types{
	MOVEMENT = 0,
	ANIMATION = 1
};

/**
 @brief The minimum battery level before a warning is printed on the screen
 **/
const int MINIMUM_BATTERY_LEVEL = 10;

/**
 A pointer to the drone object for manipulation
 **/
Drone * myDrone;

/**
 @brief boolean indicating if the drone has been connected or not
 **/
bool drone_connected = false;

/**
 Requested move type
 **/
int move_type = MOVEMENT;

/**
 @brief Requested Animation type
 **/
int anim_type = 0;

/**
 @brief Mutual Exclusion implementation for move control process
 **/
int locker = UNLOCKED;

/**
 @brief Requested time for an animation request
 **/
int anim_time = 0;

/**
 @brief Variable to keep the battery value stored
 **/
int cached_battery = 0;

/**
 @brief The current x coordinate
 **/
float x;

/**
 @brief The current y coordinate
 **/
float y;

/**
 @brief The current z coordinate
 **/
float z;

/**
 @brief The current relative rotation
 **/
float yaw;

/**
 @brief The change in x coordinate
 **/
float vx;

/**
 @brief The change in y coordinate
 **/
float vy;

/**
 @brief The change in z coordinate
 **/
float vz;

/**
 @brief Timestamp indication 
 **/
float last_nav_receive;

/**
 @brief Timestamp indicating the last time the navdata was calculated
 **/
float last_nav_calc;

/**
 @brief Flag indicating the drone movement has been disabled (hover)
 **/
int requested_enable_move = 0;

/**
 @brief The requested x velocity percentage
 **/
float requested_x_tilt = 0.0;

/**
 @brief The requested y velocity percentage
 **/
float requested_y_tilt = 0.0;

/**
 @brief The requested z velocity percentage
 **/
float requested_z_vel = 0.0;

/**
 @brief The requested yaw (rotation) velocity percentage
 **/
float requested_yaw_vel = 0.0;

/**
 @brief The process id of the control thread
 **/
int control_pid;

/**
 The process id of the sensor thread
 **/
int sensors_pid;

/**
 @brief A string representing the drones firmware version
 //This functionality is not supported for 1.7.11 but has been confirmed on 1.10.10
 **/
//std::string firmware_Version;
//bool firmwareReceived = false;


void monitor_sensors(); 
void init_position_tracking();
void update_position_tracking();
void move_control_thread();

void send_control_parameters(int enable, float x_tilt, float y_tilt, float yaw_vel, float z_vel);

void set_drone_Mac_Address(char * macAddress)
{
	if (drone_connected)
	{
		myDrone->controller().setMacAddress(macAddress);
	}
}

void monitor_sensors()
{
	int battery;
	while(true)
	{
		battery = drone_get_battery();
		if (battery > 0 && battery < MINIMUM_BATTERY_LEVEL)
		{
			printf("Battery Level is low. %i\n", battery);
		}
		update_position_tracking();
		msleep(15);
	}
}

void drone_connect()
{
	move_type = MOVEMENT;
	if(!drone_connected)
	{
        printf("Please ensure your drone firmware version is 1.7.11";
		myDrone = new Drone();
		myDrone->start();

		cached_battery = 0;
		init_position_tracking();
		
		sensors_pid = start_process(monitor_sensors);
		
		control_pid = start_process(move_control_thread);
		
		drone_connected = true;
	}
}

void drone_disconnect()
{
	if(drone_connected)
	{
		kill_process(control_pid);
		kill_process(sensors_pid);
		
		myDrone->stop();
		delete myDrone;
		
		drone_connected = false;
	}
}

void drone_takeoff()
{
	if(drone_connected)
	{
		myDrone->controller().takeOff();
	}
}

void drone_land()
{
	if(drone_connected)
	{
		myDrone->controller().land();
	}
}

void drone_emergency()
{
	if(drone_connected)
	{
		myDrone->controller().sendEmergencyToggle();
	}
}

// The Drone doesn't always report a valid battery level (it instead reports 0), so we cache it.
int drone_get_battery()
{
	if(drone_connected)
	{
		NavigationData batteryNavData;
		myDrone->navigationDataReceiver().copyDataTo(batteryNavData);
		
		if(batteryNavData.batteryLevel)
		{
			cached_battery = batteryNavData.batteryLevel;
		}
		
		return cached_battery;
	}
    
    return 0;

}

void init_position_tracking()
{
    x=0;
    y=0;
    z=0;
    yaw=0;
    vx=0;
    vy=0;
    vz=0;
	
    last_nav_receive = seconds();
    last_nav_calc = seconds();
	
	requested_enable_move = 0;
	requested_x_tilt = 0.0;
	requested_y_tilt = 0.0;
	requested_yaw_vel = 0.0;
	requested_z_vel = 0.0;
}

void update_position_tracking()
{
	NavigationData latest_data;
	
	myDrone->navigationDataReceiver().copyDataTo(latest_data);
	
	float current_receive_time = myDrone->navigationDataReceiver().navTimestamp * TIMESTAMP_PER_SECOND;
	float current_time = seconds();

	/*
	 This functionality is not supported for 1.7.11 but has been confirmed on 1.10.10
	if (!firmwareReceived)
	{
		int success = myDrone->configDataReceiver().getFirmwareVersion(firmware_Version);
		if( success == 0 )
		{
			firmwareReceived = true;
		}
	}*/
	
	bool zero_vx = false;
	bool zero_vy = false;
	bool zero_z = false;
	bool zero_yaw = false;
	
	
	if(latest_data.speed.vx < DRIFT_TOLERANCE && latest_data.speed.vx > -DRIFT_TOLERANCE)
	{
		zero_vx = true;
	}
	if(latest_data.speed.vy < DRIFT_TOLERANCE && latest_data.speed.vy > -DRIFT_TOLERANCE)
	{
		zero_vy = true;
	}
	
	if(latest_data.altitude < DRIFT_TOLERANCE && latest_data.altitude > -DRIFT_TOLERANCE)
	{
		zero_z = true;
	}
	
	if(latest_data.orientation.yaw < DRIFT_TOLERANCE && latest_data.orientation.yaw > -DRIFT_TOLERANCE)
	{
		zero_yaw = true;
	}
	
	if(! zero_vx || ! requested_enable_move) vx = latest_data.speed.vx;
	if(! zero_vy || ! requested_enable_move) vy = -latest_data.speed.vy;
	if(! zero_z)
	{
		vz = (latest_data.altitude * MILIMETERS_PER_METER - z) * (current_receive_time - last_nav_receive) * TIMESTAMP_PER_SECOND;
		z = latest_data.altitude * MILIMETERS_PER_METER; // this returns mm
	}
	else
	{
		z += vz * (current_time-last_nav_calc);
	}
	
	x += vx * (current_time-last_nav_calc);
	y += (vy ) * (current_time-last_nav_calc);
	
	if(! zero_yaw) yaw = -latest_data.orientation.yaw; // this returns deg
	
	last_nav_calc = current_time;
	last_nav_receive = current_receive_time;
}

float drone_get_x()
{
	return x;
}

float drone_get_y()
{
	return y;
}

float drone_get_z()
{
	return z;
}

float drone_get_yaw()
{
	return yaw;
}

float drone_get_x_velocity()
{
	return vx;
}

float drone_get_y_velocity()
{
	return vy;
}

float drone_get_z_velocity()
{
	return vz;
}

void drone_front_camera()
{
	myDrone->controller().switchToFrontCamera();
}

void drone_down_camera()
{
	myDrone->controller().switchToDownCamera();
}

void enable_drone_vision()
{
	myDrone->videoDataReceiver().write_external_camera_data();
	myDrone->videoDataReceiver().setEnableCbcuiVision(true);
}

void disable_drone_vision()
{
	myDrone->videoDataReceiver().setEnableCbcuiVision(false);
	myDrone->videoDataReceiver().delete_external_camera_data();
}

void move_control_thread()
{
	int request;
	int anim_request;
	int t;
	while(true)
	{
		while(locker==LOCKED) {}
		locker = LOCKED;
		request = move_type;
		anim_request = anim_type;
		t = anim_time;
		locker = UNLOCKED;

		switch(request)
		{
			case MOVEMENT:
			{
				myDrone->controller().sendControlParameters(requested_enable_move, requested_x_tilt, requested_y_tilt, requested_yaw_vel, requested_z_vel);
				myDrone->controller().sendWatchDog();//ensures the drone doesn't lose connection
				msleep(5);
				break;
			}
			case ANIMATION:
			{
				myDrone->controller().sendAnimationControl((AnimationCmd)anim_request, t*1000);
				myDrone->controller().sendWatchDog();//ensures the drone doesn't lose connection
				msleep(5);
				//move_type = MOVEMENT;
				break;
			}
			default:
			{
				myDrone->controller().sendWatchDog();//ensures the drone doesn't lose connection
				break;
			}
		}	

	}
}

void drone_move(float x_tilt, float y_tilt, float z_vel, float yaw_vel)
{
	requested_enable_move = true;
	requested_x_tilt = x_tilt;
	requested_y_tilt = -y_tilt;
	requested_yaw_vel = yaw_vel;
	requested_z_vel = z_vel;
}

void drone_hover()
{
	requested_enable_move = false;
}


void drone_hover_on_roundel(int shouldHover)
{
	if(shouldHover == 0)
		myDrone->controller().setFlyingMode(HOVER_ON_ORIENTED_ROUNDEL);
	else if(shouldHover == 1)
		myDrone->controller().setFlyingMode(NORMAL);
	else
	{
		printf("\n Hover Failed.\n Command recieved %i. Input of 0 or 1 is accepted", shouldHover);
	}
}

void drone_set_ultrasound_channel(int channel)
{
	if(channel == CHANNEL_22_5MHZ)
		myDrone->controller().setUltrasoundFrequency(CHANNEL_22_5MHZ);
	else if(channel == 2)
		myDrone->controller().setUltrasoundFrequency(CHANNEL_22MHZ);		
}


void drone_set_detection(int detectType)
{
	switch (detectType)
	{
		case NONE:
			myDrone->controller().disableDroneTagging();
			break;
		case GREEN:
			myDrone->controller().detectColor(GREEN);
			break;
		case YELLOW:
			myDrone->controller().detectColor(YELLOW);
			break;
		case BLUE:
			myDrone->controller().detectColor(BLUE);
			break;
		case ORANGE_GREEN:
			myDrone->controller().detectGroundStripe(ORANGE_GREEN);
			break;
		case YELLOW_BLUE:
			myDrone->controller().detectGroundStripe(YELLOW_BLUE);
			break;
		case ROUNDEL:
			myDrone->controller().detectRoundel_BW();
			break;
	}
}

void drone_animation(int animationType, int tInterval)
{
	while(locker==LOCKED) {}

	locker = LOCKED;
	move_type = ANIMATION;
	anim_type = animationType;
	anim_time = tInterval;
	locker = UNLOCKED;

	drone_move(0,0,0,0);
	sleep(tInterval);

	while(locker==LOCKED) {}
	locker = LOCKED;
	move_type = MOVEMENT;
	locker = UNLOCKED;
}


void drone_LED_animation(int LED_animation, float frequency, int tInterval)
{
	myDrone->controller().sendLEDAnimationControl(LED_AnimationCmd(LED_animation), *(int*)(&frequency), tInterval * 1000);
}
