# #####################################################################
# Automatically generated by qmake (2.01a) Mon Sep 14 20:04:30 2009
# #####################################################################
include(config.pri)
TEMPLATE = app
TARGET = 
DEPENDPATH += . \
    src \
    ui \
    rc
INCLUDEPATH += . \
    src
INCLUDEPATH += src/vision
DEPENDPATH += src/vision
macx:
else { 
    CONFIG += has_microdia_camera
    DEFINES += APP_FULLSCREEN
}

# Input
HEADERS += src/MainWindow.h \
    src/MainMenu.h \
    src/Programs.h \
    src/Page.h \
    src/About.h \
    src/SensorsMotors.h \
    src/Utilities.h \
    src/Graph.h \
    src/Console.h \
    src/FileManager.h \
    src/Motors.h \
    src/SensorPorts.h \
    src/Servos.h \
    src/VisionRawDisplay.h \
    src/VisionSettings.h \
    src/VisionTracking.h \
    src/CreateStatus.h \
    src/Settings.h \
    src/CbobData.h \
    src/SharedMem.h \
    src/VisionSelect.h \
    src/UserProgram.h \
    src/Compiler.h \
    src/GraphWidget.h \
    src/MotorTuning.h \
    src/MotorTest.h \
    src/Brightness.h \
    src/Volume.h \
    src/Wireless/Wireless.h \
    src/Wireless/WifiDialog.h \
    src/Wireless/WifiItem.h \
    src//Serial/SerialPort.h \
    src/Serial/SerialServer.h \
    src/Serial/SerialPage.h \
    src/Keyboard/QwertyKeypad.h \
    src/Keyboard/Keypad.h
FORMS += ui/MainWindow.ui \
    ui/MainMenu.ui \
    ui/Programs.ui \
    ui/About.ui \
    ui/SensorsMotors.ui \
    ui/Utilities.ui \
    ui/VisionSelect.ui \
    ui/Graph.ui \
    ui/Console.ui \
    ui/FileManager.ui \
    ui/Motors.ui \
    ui/SensorPorts.ui \
    ui/Servos.ui \
    ui/VisionRawDisplay.ui \
    ui/VisionSettings.ui \
    ui/VisionTracking.ui \
    ui/CreateStatus.ui \
    ui/Settings.ui \
    ui/Compiler.ui \
    ui/Keypad.ui \
    ui/MotorTuning.ui \
    ui/MotorTest.ui \
    ui/Brightness.ui \
    ui/Volume.ui \
    ui/Serial.ui \
    ui/Wireless.ui \
    ui/QwertyKeypad.ui \
    ui/WifiItem.ui \
    ui/WifiDialog.ui
SOURCES += src/main.cpp \
    src/MainWindow.cpp \
    src/MainMenu.cpp \
    src/Programs.cpp \
    src/Page.cpp \
    src/About.cpp \
    src/SensorsMotors.cpp \
    src/Utilities.cpp \
    src/Graph.cpp \
    src/Console.cpp \
    src/FileManager.cpp \
    src/Motors.cpp \
    src/SensorPorts.cpp \
    src/Servos.cpp \
    src/VisionRawDisplay.cpp \
    src/VisionSettings.cpp \
    src/VisionTracking.cpp \
    src/CreateStatus.cpp \
    src/Settings.cpp \
    src/CbobData.cpp \
    src/VisionSelect.cpp \
    src/UserProgram.cpp \
    src/Compiler.cpp \
    src/GraphWidget.cpp \
    src/MotorTuning.cpp \
    src/MotorTest.cpp \
    src/Brightness.cpp \
    src/Volume.cpp \
    src/Wireless/Wireless.cpp \
    src/Wireless/WifiDialog.cpp \
    src/Wireless/WifiItem.cpp \
    src/Serial/SerialPort.cpp \
    src/Serial/SerialServer.cpp \
    src/Serial/SerialPage.cpp \
    src/Keyboard/QwertyKeypad.cpp \
    src/Keyboard/Keypad.cpp

# Vision
SOURCES += src/vision/Blob.cpp
HEADERS += src/vision/Blob.h
SOURCES += src/vision/Camera.cpp
HEADERS += src/vision/Camera.h
SOURCES += src/vision/ColorTracker.cpp
HEADERS += src/vision/ColorTracker.h
SOURCES += src/vision/ctdebug.cpp
HEADERS += src/vision/ctdebug.h
SOURCES += src/vision/DrawBlobs.cpp
HEADERS += src/vision/DrawBlobs.h
HEADERS += src/vision/FrameHandler.h
HEADERS += src/vision/HSVRange.h
SOURCES += src/vision/HSVRangeDisplay.cpp
HEADERS += src/vision/HSVRangeDisplay.h
SOURCES += src/vision/HSVRangeLUT.cpp
HEADERS += src/vision/HSVRangeLUT.h
SOURCES += src/vision/Image.cpp
HEADERS += src/vision/Image.h
SOURCES += src/vision/ImageDisplay.cpp
HEADERS += src/vision/ImageDisplay.h
HEADERS += src/vision/Pixel565.h
SOURCES += src/vision/Pixel565toHSV.cpp
HEADERS += src/vision/Pixel565toHSV.h
SOURCES += src/vision/RawView.cpp
HEADERS += src/vision/RawView.h
SOURCES += src/vision/SimulatedCamera.cpp
HEADERS += src/vision/SimulatedCamera.h
SOURCES += src/vision/test.cpp
HEADERS += src/vision/test.h
SOURCES += src/Vision.cpp
SOURCES += src/Vision.h
has_microdia_camera { 
    SOURCES += src/vision/MicrodiaCamera.cpp
    HEADERS += src/vision/MicrodiaCamera.h
    DEFINES += HAS_MICRODIA_CAMERA
}
RESOURCES += rc/images.qrc