/// ConfigDataReceiver.h
#ifndef CONFIGDATARECEIVER_H
#define CONFIGDATARECEIVER_H

#include <commonc++/Mutex.h++>
#include <commonc++/Thread.h++>
#include "CommunicationChannelTCP.h"
#include <string>
#include "Controller.h"

namespace ARDrone
{
	
  typedef float float32_t;
	
  class ConfigDataReceiver :public ccxx::Thread
  {
  private:
	/**
	 @brief A CommunicationChannel specifically for receiving Navigation Data
	 **/
    ARDrone::CommunicationChannelTCP myCommunicationChannel;
	  
	/**
	 @brief A variable to ensure Mutual Exclusion to prevent reading and updating the buffer at the same time
	 **/
    ccxx::Mutex myMutex;
	
	/**
	 The Address of the Drone
	 **/
    std::string myDroneAddress;
	
	/**
	 A pointer to a Drone's Controller
	 **/
    ARDrone::Controller* myController;
	
  public:
	  
	/**
	 @brief A constructor for a Config Data Receiver that also initializes the Controller and Drone IP
	 @param pController A pointer to a controller that is able to send ATCommands
	 @param	szDroneIpAddress A string representing the Drone's IP Address so we can connect to get NavData
	 **/
    ConfigDataReceiver(ARDrone::Controller* pController, const char* szDroneIpAddress);
	
	/**
	 @brief Destructor that ensures that the Receiver Stops and closes its connections if the object is destroyed
	 **/
    ~ConfigDataReceiver() throw ();
	  
  protected:
	/**
	@brief 
	**/
    void run();
  };
}//namespace ARDrone
#endif
