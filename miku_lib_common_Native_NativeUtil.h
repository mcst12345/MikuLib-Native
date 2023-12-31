/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class miku_lib_common_Native_NativeUtil */

#ifndef _Included_miku_lib_common_Native_NativeUtil
#define _Included_miku_lib_common_Native_NativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    Kill
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_miku_lib_common_Native_NativeUtil_Kill
  (JNIEnv *, jclass, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    GetClass
 * Signature: (Ljava/lang/String;)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_miku_lib_common_Native_NativeUtil_GetClass
  (JNIEnv *, jclass, jstring);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuMapPut
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_miku_lib_common_Native_NativeUtil_MikuMapPut
  (JNIEnv *, jclass, jstring, jobject, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuMapGet
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_miku_lib_common_Native_NativeUtil_MikuMapGet
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuMapContains
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_miku_lib_common_Native_NativeUtil_MikuMapContains
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuListAdd
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_miku_lib_common_Native_NativeUtil_MikuListAdd
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuListRemove
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_miku_lib_common_Native_NativeUtil_MikuListRemove
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    MikuListContains
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_miku_lib_common_Native_NativeUtil_MikuListContains
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     miku_lib_common_Native_NativeUtil
 * Method:    GetObjectsFromList
 * Signature: (Ljava/lang/String;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_miku_lib_common_Native_NativeUtil_GetObjectsFromList
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
