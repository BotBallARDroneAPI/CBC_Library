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
		int cnt = 0;
		try 
		{
			myCommunicationChannel.connectWithDroneAtAddress(myDroneAddress.c_str(), CONFIG_DATA_PORT);
			myCommunicationChannel.setTimeout(3000);
			/*
			unsigned char trigger[4] = {0x01, 0x00, 0x00, 0x00};
			myCommunicationChannel.send(trigger, 4);
						
			unsigned char navDataDemo[10240];
			unsigned int navDataLength = 10240;*/
			while(false == testCancel())
			{
				try 
				{
					myController->requestConfigData();
					//myCommunicationChannel.receive(navDataDemo, navDataLength);
					cnt++;
					if(cnt >= 5)
					{
						cnt = 0;
						synchronized(myMutex)
						{
							//MemoryLibrary::Buffer navDataBuffer(navDataDemo, navDataLength);
							//parse(navDataBuffer);
						}
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
