LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := NativeByNdkBuild
LOCAL_LDFLAGS := -Wl,--build-id
LOCAL_SRC_FILES := \
	/home/zpq/AndroidStudioProjects/NdkStudy/NativeByNdkBuild/src/main/jni/com_zpq_nativebyndkbuild_MainActivity.cpp \

LOCAL_C_INCLUDES += /home/zpq/AndroidStudioProjects/NdkStudy/NativeByNdkBuild/src/main/jni
LOCAL_C_INCLUDES += /home/zpq/AndroidStudioProjects/NdkStudy/NativeByNdkBuild/src/debug/jni

include $(BUILD_SHARED_LIBRARY)
