LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	playground.cpp \
	playgroundservice.cpp \
	main_playgroundservice.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	liblog \
	libbinder \
	libutils

LOCAL_MODULE:= playgroundservice

include $(BUILD_EXECUTABLE)


#LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	playground.cpp \
	playgroundclient.cpp \
	main_playgroundclient.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	liblog \
	libbinder \
	libutils

LOCAL_MODULE:= playgroundclient

include $(BUILD_EXECUTABLE)
