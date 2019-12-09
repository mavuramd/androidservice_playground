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

# ==========================================

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	playground.cpp \
	playgroundclient.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	liblog \
	libbinder \
	libutils

LOCAL_MODULE:= libplaygroundclient

include $(BUILD_SHARED_LIBRARY)

# ==========================================

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	main_playgroundclient.cpp

LOCAL_SHARED_LIBRARIES := \
  libplaygroundclient \
	liblog \
  libbinder \
	libutils

LOCAL_MODULE:= playgroundclient

include $(BUILD_EXECUTABLE)
