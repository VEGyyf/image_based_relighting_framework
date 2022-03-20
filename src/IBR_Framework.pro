QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IBR_Framework
TEMPLATE = app

win32:{
    #Dlib
    INCLUDEPATH += D:\libraries\dlib-19.23

    #OpenCV
    CONFIG(debug, debug|release)
    {
         INCLUDEPATH += D:\opencv\opencv-build\install\include

         LIBS += D:\opencv\opencv-build\lib\libopencv_*.a

    }
    CONFIG(release, debug|release)
    {
         INCLUDEPATH += D:\opencv\opencv-build\install\include

         LIBS += D:\opencv\opencv-build\lib\libopencv_*.a
    }
}
else:unix{
#Dlib
    INCLUDEPATH += /Users/Libraries/dlib-19.0

#OpenCV
    INCLUDEPATH += /usr/local/include/
    LIBS += -L/usr/local/lib
    LIBS += -lopencv_core
    LIBS += -lopencv_imgproc
    LIBS += -lopencv_highgui
    LIBS += -lopencv_ml
    LIBS += -lopencv_video
    LIBS += -lopencv_features2d
    LIBS += -lopencv_calib3d
    LIBS += -lopencv_objdetect
    LIBS += -lopencv_contrib
    LIBS += -lopencv_legacy
    LIBS += -lopencv_flann
}

SOURCES += \
    main.cpp \
    mathsFunctions.cpp \
    LightingBasis.cpp \
    imageProcessing.cpp \
    mainWindow.cpp \
    relighting.cpp \
    progressWindow.cpp \
    voronoi.cpp \
    optimisation.cpp \
    lightStageRelighting.cpp \
    officeRoomRelighting.cpp \
    freeformlightstage.cpp \
    manualSelection.cpp \
    PFMReadWrite.cpp \
    loadFiles.cpp

HEADERS  += \
    PFMReadWrite.h \
    freeformlightstage.h \
    imageProcessing.h \
    LightingBasis.h \
    lightStageRelighting.h \
    loadFiles.h \
    mainWindow.h \
    manualSelection.h \
    mathsFunctions.h \
    officeRoomRelighting.h \
    optimisation.h \
    progressWindow.h \
    voronoi.h \
    relighting.h
