/// VideoDataReceiver.cpp
#ifndef VIDEODATARECEIVER_H
#define VIDEODATARECEIVER_H

#include "Controller.h"
#include "VideoDecoder.h"
#include "commonc++/Thread.h++"

namespace ARDrone
{
	class VideoDataReceiver : public ccxx::Thread
	{
	private:
		static const int VIDEO_DATA_SIZE = 921600;
		static const int VIDEO_BUF_SIZE = 2;
		ARDrone::CommunicationChannel myCommunicationChannel;
		ccxx::Mutex myMutex;
		std::string myDroneAddress;
		ARDrone::Controller* myController;
		unsigned char myVideoData[VIDEO_DATA_SIZE]; //640x480x3 MAX out
		unsigned int videoDataLength;
<<<<<<< HEAD
		//Mod by Jeremy Rand
		VideoDecoder::Image videoBuffer[VIDEO_BUF_SIZE];
		long videoTimestamp[VIDEO_BUF_SIZE]; 
=======
		VideoDecoder::Image videoBuffer[2];
		long videoTimestamp[2]; 
>>>>>>> Updating the repository with my changes.  There is an enormous amount of changes based on final testing and ARDrone 2 tests.
		int safeBufferIndex;
		bool enableCbcuiVision;
		
	public:

		VideoDataReceiver(ARDrone::Controller* pController, const char* szDroneIpAddress);
		~VideoDataReceiver() throw ();
		void copyDataTo(ARDrone::VideoDecoder::Image& resultImage);
		void setEnableCbcuiVision(bool enable);
		void copyDataTo(ARDrone::VideoDecoder::Image& resultImage, long& timestamp);
		/** 
		 @brief Sends the vision data to the CBC's vision library for vision tracking
		 **/
		void write_external_camera_data();
		/**
		 @brief Deletes the vision data from the CBC'c vision library to stop vision tracking
		 **/
		void delete_external_camera_data();
	protected:
		void run();
	};
}//namespace ARDrone

#endif
