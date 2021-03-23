//
//  iLocalizeCocos2dx.cpp
//  iLocalize Cocos2dx SDK
//

#include "iLocalizeCocos2dx.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include <jni.h>
#include <cocos/base/ccUtils.h>
#include "platform/android/jni/JniHelper.h"

void iLocalizeCocos2dx::init(string appKey, string language, bool isInternationalizing,
                             bool isBuildDebug) {

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo methodInfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            methodInfo, "net/ilocalize/init/iLocalize",
            "init", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V");

    if (isValid) {
        jobject jActivity = cocos2d::JniHelper::getActivity();
        jstring jAppKey = methodInfo.env->NewStringUTF(appKey.c_str());
        jstring jLanguage = methodInfo.env->NewStringUTF(language.c_str());
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, jActivity,
                                             jAppKey,
                                             jLanguage, isInternationalizing, isBuildDebug);

        methodInfo.env->DeleteLocalRef(jAppKey);
        methodInfo.env->DeleteLocalRef(jLanguage);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
#endif
}

string iLocalizeCocos2dx::getString(string code, string defaultStr) {

    string ret = "";
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(minfo,
                                                           "net/ilocalize/init/iLocalize",
                                                           "getString",
                                                           "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

    if (isValid) {
        jstring jcode = minfo.env->NewStringUTF(code.c_str());
        jstring jdefault = minfo.env->NewStringUTF(defaultStr.c_str());
        jstring result = (jstring) minfo.env->CallStaticObjectMethod(minfo.classID, minfo.methodID,
                                                                     jcode, jdefault);
        ret = cocos2d::JniHelper::jstring2string(result);
        minfo.env->DeleteLocalRef(result);
        minfo.env->DeleteLocalRef(jcode);
        minfo.env->DeleteLocalRef(jdefault);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
    return ret;
}

string iLocalizeCocos2dx::getPageString(string pageId, string code, string defaultStr) {

    string ret = "";
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo,
            "net/ilocalize/init/iLocalize",
            "getPageString",
            "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

    if (isValid) {
        jstring jpageId = minfo.env->NewStringUTF(pageId.c_str());
        jstring jcode = minfo.env->NewStringUTF(code.c_str());
        jstring jdefault = minfo.env->NewStringUTF(defaultStr.c_str());
        jstring result = (jstring) minfo.env->CallStaticObjectMethod(minfo.classID, minfo.methodID,
                                                                     jpageId, jcode, jdefault);
        ret = cocos2d::JniHelper::jstring2string(result);
        minfo.env->DeleteLocalRef(result);
        minfo.env->DeleteLocalRef(jpageId);
        minfo.env->DeleteLocalRef(jcode);
        minfo.env->DeleteLocalRef(jdefault);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
    return ret;
}

void iLocalizeCocos2dx::updateLanguage(string language) {

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(minfo,
                                                           "net/ilocalize/init/iLocalize",
                                                           "updateLanguage",
                                                           "(Ljava/lang/String;)V");
    if (isValid) {
        jstring jlanguage = minfo.env->NewStringUTF(language.c_str());
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID, jlanguage);
        minfo.env->DeleteLocalRef(jlanguage);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif

}

void iLocalizeCocos2dx::setLogEnable(bool enable) {

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize", "setLogEnable", "(Z)V");
    if (isValid) {
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID, enable);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif

}

TranslationPreparedCallback preparedCallback;

void iLocalizeCocos2dx::setTranslationPreparedCallback(TranslationPreparedCallback callback) {

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    preparedCallback = callback;
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize",
            "registerCocos2dxTranslationPreparedCallback",
            "()V");
    if (isValid) {
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif

}

void iLocalizeCocos2dx::evaluateString(string code, string stringContent) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize", "evaluateString",
            "(Ljava/lang/String;Ljava/lang/String;)V");
    if (isValid) {
        jstring jcode = minfo.env->NewStringUTF(code.c_str());
        jstring jcontent = minfo.env->NewStringUTF(stringContent.c_str());
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID, jcode, jcontent);
        minfo.env->DeleteLocalRef(jcode);
        minfo.env->DeleteLocalRef(jcontent);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
}

void iLocalizeCocos2dx::evaluateAllStrings() {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize", "evaluateAllStrings", "()V");
    if (isValid) {
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
}

void iLocalizeCocos2dx::setScreenshotPageId(string pageId) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize", "setScreenshotPageId",
            "(Ljava/lang/String;)V");
    if (isValid) {
        jstring jpageId = minfo.env->NewStringUTF(pageId.c_str());
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID, jpageId);
        minfo.env->DeleteLocalRef(jpageId);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
}

void iLocalizeCocos2dx::showFloatingWindow(bool isShowAutoScreenshot) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo minfo;
    bool isValid = cocos2d::JniHelper::getStaticMethodInfo(
            minfo, "net/ilocalize/init/iLocalize", "showFloatingWindow", "(Z)V");
    if (isValid) {
        minfo.env->CallStaticVoidMethod(minfo.classID, minfo.methodID, isShowAutoScreenshot);
        minfo.env->DeleteLocalRef(minfo.classID);
    }
#endif
}

jobject getJavaUserConfig(iLocalizeCocos2dxUserConfig userConfig) {
    JNIEnv *jniEnv = cocos2d::JniHelper::getEnv();
    jclass clazz = jniEnv->FindClass("net/ilocalize/config/UserConfig$Builder");
    jobject builderObj = jniEnv->NewObject(clazz, jniEnv->GetMethodID(clazz, "<init>", "()V"));
    jstring userId = cocos2d::JniHelper::getEnv()->NewStringUTF(userConfig.getUserId().c_str());
    jstring userTag = cocos2d::JniHelper::getEnv()->NewStringUTF(userConfig.getUserTags().c_str());
    const char *sig = "(Ljava/lang/String;Ljava/lang/String;)Lnet/ilocalize/config/UserConfig;";
    jmethodID buildId = jniEnv->GetMethodID(clazz, "build", sig);
    jobject javaUserConfig = jniEnv->CallObjectMethod(builderObj, buildId, userId, userTag);
    jniEnv->DeleteLocalRef(userId);
    jniEnv->DeleteLocalRef(userTag);
    jniEnv->DeleteLocalRef(clazz);
    jniEnv->DeleteLocalRef(builderObj);
    return javaUserConfig;
}

jobject getJavaOverflowConfig(iLCheckOverflowCocos2dxConfig overflowConfig) {
    JNIEnv *jniEnv = cocos2d::JniHelper::getEnv();
    jclass clazz = jniEnv->FindClass("net/ilocalize/config/CheckOverflowConfig$Builder");
    jobject builderObj = jniEnv->NewObject(clazz, jniEnv->GetMethodID(clazz, "<init>", "()V"));
    jstring pageId = cocos2d::JniHelper::getEnv()->NewStringUTF(overflowConfig.getPageId().c_str());
    jstring stringId = cocos2d::JniHelper::getEnv()->NewStringUTF(
            overflowConfig.getStringId().c_str());
    jstring stringContent = cocos2d::JniHelper::getEnv()->NewStringUTF(
            overflowConfig.getStringRealContent().c_str());
    jfloat designWidth = overflowConfig.getDesignWidth();
    jfloat designHeight = overflowConfig.getDesignHeight();
    jfloat measureWidth = overflowConfig.getMeasuredWidth();
    jfloat measureHeight = overflowConfig.getMeasuredHeight();
    jstring fontFamily = cocos2d::JniHelper::getEnv()->NewStringUTF(
            overflowConfig.getFontFamily().c_str());
    jfloat fontSize = overflowConfig.getFontSize();
    jfloat lineSpacing = overflowConfig.getLineSpacing();
    jint textAlign = overflowConfig.getTextAlign();
    jboolean isBold = overflowConfig.getIsBold();
    jboolean isItalic = overflowConfig.getIsItalic();
    jboolean isMultipleLine = overflowConfig.getIsMultipleLine();
    const char *sig = "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FFFFLjava/lang/String;FFIZZZ)Lnet/ilocalize/config/CheckOverflowConfig;";
    jmethodID buildId = jniEnv->GetMethodID(clazz, "build", sig);
    jobject javaOverflowConfig = jniEnv->CallObjectMethod(builderObj, buildId, pageId, stringId,
                                                          stringContent, designWidth, designHeight,
                                                          measureWidth, measureHeight, fontFamily,
                                                          fontSize, lineSpacing, textAlign,
                                                          isBold, isItalic, isMultipleLine);
    jniEnv->DeleteLocalRef(pageId);
    jniEnv->DeleteLocalRef(stringId);
    jniEnv->DeleteLocalRef(stringContent);
    jniEnv->DeleteLocalRef(fontFamily);
    jniEnv->DeleteLocalRef(clazz);
    jniEnv->DeleteLocalRef(builderObj);
    return javaOverflowConfig;
}

void iLocalizeCocos2dx::updateUserInfo(iLocalizeCocos2dxUserConfig userConfig) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    const char *sig = "(Lnet/ilocalize/config/UserConfig;)V";
    cocos2d::JniMethodInfo info;
    if (cocos2d::JniHelper::getStaticMethodInfo(
            info, "net/ilocalize/init/iLocalize", "updateUserInfo", sig)) {
        jobject config = getJavaUserConfig(userConfig);
        info.env->CallStaticVoidMethod(info.classID, info.methodID, config);
        info.env->DeleteLocalRef(config);
        info.env->DeleteLocalRef(info.classID);
    }
#endif
}

void iLocalizeCocos2dx::checkStringOverflow(iLCheckOverflowCocos2dxConfig overflowConfig) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    const char *sig = "(Lnet/ilocalize/config/CheckOverflowConfig;)V";
    cocos2d::JniMethodInfo info;
    if (cocos2d::JniHelper::getStaticMethodInfo(
            info, "net/ilocalize/init/iLocalize", "checkStringOverflow", sig)) {
        jobject config = getJavaOverflowConfig(overflowConfig);
        info.env->CallStaticVoidMethod(info.classID, info.methodID, config);
        info.env->DeleteLocalRef(config);
        info.env->DeleteLocalRef(info.classID);
    }
#endif
}

void iLocalizeCocos2dx::enableEvaluateFunction(bool enable) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    cocos2d::JniMethodInfo info;
    if (cocos2d::JniHelper::getStaticMethodInfo(
            info, "net/ilocalize/init/iLocalize", "enableEvaluateFunction", "(Z)V")) {
        info.env->CallStaticVoidMethod(info.classID, info.methodID, enable);
        info.env->DeleteLocalRef(info.classID);
    }
#endif
}

extern "C" {

JNIEXPORT void JNICALL
Java_net_ilocalize_init_iLocalize_onCocos2dxTranslationPrepared(JNIEnv *jniEnv, jclass clazz,
                                                                jboolean isSuccess) {
    if (preparedCallback) {
        preparedCallback(isSuccess);
    }
}

}

#endif