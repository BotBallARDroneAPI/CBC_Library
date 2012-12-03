/// CommunicationChannelTCP.cpp
#include "CommunicationChannelTCP.h"
#include <commonc++/Thread.h++>
#include <commonc++/ScopedLock.h++>

namespace ARDrone
{
	CommunicationChannelTCP::CommunicationChannelTCP()
	{
		myStream.init();
	}

	CommunicationChannelTCP::~CommunicationChannelTCP()
	{
		disconnectFromDrone();
	}
	
	void CommunicationChannelTCP::connectWithDroneAtAddress(const char* szDroneIpAddress, int iPort)
	{
		ccxx::String strAddr(szDroneIpAddress);
		myStream.connect(strAddr, iPort);
		myStream.setTimeout(3000);
	}
	
	void CommunicationChannelTCP::disconnectFromDrone()
	{
		if(isConnectedWithDrone())
		{
			myStream.shutdown();
		}
	}
	
	bool CommunicationChannelTCP::isConnectedWithDrone()
	{
		return myStream.isConnected();
	}
	
	void CommunicationChannelTCP::setTimeout(int t)
	{
		myStream.setTimeout(t);
	}
	
	void CommunicationChannelTCP::receive(unsigned char* bytes, unsigned int& bufferLength)
	{  
		int actualReceivedLength = myStream.read(bytes, bufferLength);
		bufferLength = actualReceivedLength;
	}
}//namespace ARDrone
