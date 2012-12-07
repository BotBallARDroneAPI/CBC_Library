/// ConfigDataReciver.cpp

#include "ConfigDataReceiver.h"
#include "DroneConstants.h"

#include <commonc++/ScopedLock.h++>
#include "compat.h"

namespace ARDrone
{
	ConfigDataReceiver::ConfigDataReceiver(Controller* pController, const char* szDroneIpAddress)
	{
		myDroneAddress = szDroneIpAddress;
		myController = pController;
	}
	
	ConfigDataReceiver::~ConfigDataReceiver() throw ()
	{
		if(true == isRunning())
		{
			try
			{
				stop();
				join();
				myCommunicationChannel.disconnectFromDrone();
			}
			catch (ccxx::Exception& ex) 
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}	
	void ConfigDataReceiver::run()
	{
		std::cout << "ConfigDataReceiver started\n";
		try 
		{
			myCommunicationChannel.connectWithDroneAtAddress(myDroneAddress.c_str(), CONFIG_DATA_PORT);
			myCommunicationChannel.setTimeout(3000);
			unsigned int bufferSize = ARDRONE_CONFIGURATION_MAX_FILE_SIZE;
			unsigned char configData[bufferSize];
			int nData = 0;
			try 
			{
				myController->sendResetAcknowledgeBit();
				myController->requestConfigData();
				sleep(1);
				nData += myCommunicationChannel.receive(configData, bufferSize);
				std::cout <<"n stuff";
				parse(configData);
			}
			catch (ccxx::TimeoutException& timeoutEx) 
			{
				std::cout << "ConfigDataReceiver TIMEOUT exception thrown.." << timeoutEx.what() << std::endl;
			}
			catch (ccxx::Exception& ex) 
			{
				std::cout << "ConfigDataReceiver exception thrown.." << ex.what() << std::endl;
			}
		}
		catch (ccxx::Exception& ex) 
		{
			std::cout << "ConfigDataReceiver exception thrown.." << ex.what() << std::endl;
		}
	}
	
	void ConfigDataReceiver::parse(unsigned char* buffer)
	{
		char* strBuffer = (char*)buffer;
		std::string type;
		std::string value;
		char * pch = strtok(strBuffer, "\n");
		while(pch != NULL)
		{
			std::string temp(pch);
			std::istringstream iss(temp);
			getline(iss, type, '=');
			getline(iss, value);
			pch = strtok(NULL, "\n");
			ConfigNameToValueMap.insert(std::pair<std::string, std::string>(type, value));
		}
	}
	
	int ConfigDataReceiver::getValueFromConfigFile(std::string type, std::string & value)
	{
		std::map<std::string, std::string>::iterator iter = ConfigNameToValueMap.find(type);
		if(iter != ConfigNameToValueMap.end())
		{
			value = iter->second;
			return 0;
		}
		return -1;
	}
	
	int ConfigDataReceiver::getFirmwareVersion(std::string & retVal)
	{
		if(getValueFromConfigFile(NUM_VERSION_CONFIG_TYPE, retVal) == 0)
		{
			return 0;
		}
		return -1;
	}
	
	void ConfigDataReceiver::printConfigMap()
	{
		std::map<std::string, std::string>::iterator iter = ConfigNameToValueMap.begin();
		while(iter != ConfigNameToValueMap.end())
		{
			std::cout<< iter->first << iter->second << std::endl;
			iter++;
		}
	}
}//namespace ARDrone
