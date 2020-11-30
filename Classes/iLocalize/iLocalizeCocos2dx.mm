//
//  iLocalizeCocos2dx.m
//
//  Created by AIHelp on 2020/7/22.
//


#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)

#import "iLocalizeCocos2dx.h"
#import <iLocalizeSDK/iLocalizeSDK.h>

static TranslationPreparedCallback s_translationPrepareCallback = NULL;

static void Go2Global_onTranslationPrepareCallback(const bool success) {
    if(s_translationPrepareCallback) {
        s_translationPrepareCallback(success);
    }
}

static NSString* go2globalParseCString(const char *cstring) {
    if (cstring == NULL) {
        return NULL;
    }
    NSString * nsstring = [[NSString alloc] initWithBytes:cstring
                                                   length:strlen(cstring)
                                                 encoding:NSUTF8StringEncoding];
    return nsstring;
}

#pragma mark - implementation


void iLocalizeCocos2dx::init(string appKey, string language, bool isInternationalizing, bool isDebug) {
    NSString *appKeyStr = go2globalParseCString(appKey.c_str());
    NSString *languageStr = go2globalParseCString(language.c_str());
    [iLocalize initWithAppKey:appKeyStr language:languageStr isInternationalizing:isInternationalizing isDebug:isDebug];
}


string iLocalizeCocos2dx::getString(string code, string defaultString) {
    NSString *codeStr = go2globalParseCString(code.c_str());
    NSString *defaultStr = go2globalParseCString(defaultString.c_str());
    return [iLocalize getStringWithCode:codeStr defaultString:defaultStr].UTF8String;
}

void iLocalizeCocos2dx::updateLanguage(string language) {
    NSString *languageStr = go2globalParseCString(language.c_str());
    [iLocalize updateLanguage:languageStr];
}

void iLocalizeCocos2dx::setLogEnable(bool enable) {
    [iLocalize setLogEnable:enable];
}

void iLocalizeCocos2dx::setTranslationPreparedCallback(TranslationPreparedCallback callback) {
    s_translationPrepareCallback = callback;
    [iLocalize setTranslationPreparedCallback:Go2Global_onTranslationPrepareCallback];
}

void iLocalizeCocos2dx::evaluateString(string code) {
    [iLocalize evaluateStringWithCode:go2globalParseCString(code.c_str())];
}

void iLocalizeCocos2dx::updateUserInfo(iLocalizeCocos2dxUserConfig userConfig) {
    NSString *nsuserTags = go2globalParseCString(userConfig.getUserTags().c_str());
    iLocalizeUserConfigBuilder *userBuilder = [[iLocalizeUserConfigBuilder alloc] init];
    userBuilder.userTags = nsuserTags;
    [iLocalize setUserConfig:userBuilder.build];
}

#endif
