 #include<stdio.h>
#include <jni.h>
#include "JNIDemo.h"


JNIEXPORT void JNICALL Java_JNIDemo_print
  (JNIEnv *env, jobject obj){
        printf("hello jni niyade\n");
}


JNIEXPORT jint JNICALL Java_JNIDemo_add
  (JNIEnv *env, jobject obj, jint a, jint b)
{
        return a+b;
}