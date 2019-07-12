
#include <jni.h>

extern "C" {

    JNIEXPORT jstring JNICALL
    Java_com_squareboat_secretkeys_MainActivity_getAPIKey(JNIEnv *env, jobject instance) {

        return env-> NewStringUTF("aHR0cHM6Ly9iY3MudzNlbmdpbmVlcnMuY29tL3BhcnNlLw==");
    }

}

