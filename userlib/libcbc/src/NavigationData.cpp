/// NavigationData.cpp

#include "NavigationData.h"

namespace ARDrone
{ 
	const char* NavigationData::controlStateToString(eControlState cs)
	{
		switch(cs)
		{
			case  eDEFAULT: return "DEFAULT";
			case  eINIT: return "INIT";
			case  eLANDED: return "LANDED";
			case  eFLYING: return "FLYING";
			case  eHOVERING: return "HOVERING";
			case  eTEST: return "TEST";
			case  eTAKEOFF: return "TAKEOFF";
			case  eGOTOFIX: return "GOTOFIX";
			case  eLANDING: return "LANDING";
		}
		
		return "DONT KNOW";
	}
	const char* NavigationData::controlStateAsString()
	{
		return controlStateToString(controlState);
	}
	int NavigationData::FlagsToString(char* buffer)
	{
		int n = sprintf(buffer, 
				"Flying(%d) Video Enabled(%d) Vision Enabled(%d) Altitude Control Active(%d) User FeedBack On(%d) Control Recieved(%d) Trim Received(%d) Trim Running(%d) "
				"Trim Succeeded(%d) NavDataDemoOnly(%d) NavDataBootstrap(%d) Motors Down(%d) Gyrometers Down(%d) Battery Too Low(%d) Battery Too High(%d) Timer Elapsed(%d) "
				"Not Enough Power(%d) Angels Out of Range(%d) Too Much Wind(%d) UltrasonicSensorDeaf(%d) System Cutout Detected(%d) PICVersionNumberOK(%d) ATCodedThreadOn(%d) "
				"navDataThreadOn(%d) videoThreadOn(%d) acquisitionThreadOn(%d) controlWatchdogDelayed(%d) ADCWatchdogDelayed(%d) communicationProblemOccurred(%d) emergency(%d)",
				flags.flying, flags.videoEnabled, flags.visionEnabled, flags.altitudeControlActive, flags.userFeedbackOn, flags.controlReceived, flags.trimReceived, flags.trimRunning,
				flags.trimSucceeded, flags.navDataDemoOnly, flags.navDataBootstrap, flags.motorsDown, flags.gyrometersDown, flags.batteryTooLow, flags.batteryTooHigh, flags.timerElapsed,
				flags.notEnoughPower, flags.angelsOutOufRange, flags.tooMuchWind, flags.ultrasonicSensorDeaf, flags.cutoutSystemDetected, flags.PICVersionNumberOK, flags.ATCodedThreadOn,
				flags.navDataThreadOn, flags.videoThreadOn, flags.acquisitionThreadOn, flags.controlWatchdogDelayed, flags.ADCWatchdogDelayed, flags.communicationProblemOccurred, flags.emergency);
		return n;
	}
}//namespace ARDrone
