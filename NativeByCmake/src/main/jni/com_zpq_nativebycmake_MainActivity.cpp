//
// Created by zpq on 19-2-24.
//

#include "com_zpq_nativebycmake_MainActivity.h"

/*
 * Class:     com_zpq_nativebycmake_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zpq_nativebycmake_MainActivity_getStringFromNative
        (JNIEnv *env, jobject obj)
{
    return env->NewStringUTF("Java_com_zpq_nativebycmake_MainActivity_getStringFromNative");
}

/*
 * Class:     com_zpq_nativebycmake_MainActivity
 * Method:    getString_From_c
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zpq_nativebycmake_MainActivity_getString_1From_1c
        (JNIEnv *env, jobject obj)
{
    return env->NewStringUTF("Java_com_zpq_nativebycmake_MainActivity_getString_1From_1c");
}