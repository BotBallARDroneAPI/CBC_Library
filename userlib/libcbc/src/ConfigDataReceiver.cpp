/// NavigationDataReceiver.cpp
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
			unsigned int configDataBufferLength = ARDRONE_CONFIGURATION_BUFFER_SIZE;
			unsigned char configDataBuffer[configDataBufferLength];
			
			for(int i = 0; i< 5; i++)
			{
				myController->sendACKCommand();
				myController->requestConfigData();
				myController->sendResetAcknowledgeBit();
			}
			while(false == testCancel())
			{
				try 
				{
					myController->requestConfigData();
					myCommunicationChannel.receive(configDataBuffer, configDataBufferLength);
					printf("%s", configDataBuffer);
					synchronized(myMutex)
					{
						//MemoryLibrary::Buffer navDataBuffer(navDataDemo, navDataLength);
						//parse(navDataBuffer);
					}
				}
				catch (ccxx::TimeoutException& timeoutEx) 
				{
					std::cout << "ConfigDataReceiver TIMEOUT exception thrown.." << timeoutEx.what() << std::endl;
				}
				catch (ccxx::Exception& ex) 
				{
					std::cout << "ConfigDataReceiver exception thrown.." << ex.what() << std::endl;
				}
			}//while
		}
		catch (ccxx::Exception& ex) 
		{
			std::cout << "ConfigDataReceiver exception thrown.." << ex.what() << std::endl;
		}
		
		std::cout << "ConfigDataReceiver stopped\n";
	}
}//namespace ARDrone
