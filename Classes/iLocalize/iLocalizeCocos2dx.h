//
//  iLocalizeCocos2dx.h
//  Go2Global Cocos2dx SDK
//

#ifndef iLocalizeCocos2dx_h
#define iLocalizeCocos2dx_h

#include "cocos2d.h"
#include <string>
#include "iLocalizeConfig.h"

using namespace std;

typedef void (*TranslationPreparedCallback)(bool success);

class iLocalizeCocos2dx {
public:
    static void init(string appKey, string language, bool isInternationalizing = true, bool isDebug = false);
    static string getString(string code, string defaultString = "");
    static void updateLanguage(string language);
    static void setLogEnable(bool enable = true);
    static void updateUserInfo(iLocalizeCocos2dxUserConfig config);
    static void evaluateString(string code, string stringContent);
    static void evaluateAllStrings();
    static void setTranslationPreparedCallback(TranslationPreparedCallback callback);
    static void checkStringOverflow(iLCheckOverflowCocos2dxConfig config);
    static void enableEvaluateFunction(bool enable = false);

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    static string getPageString(string pageId, string code, string defaultString = "");
    static void setScreenshotPageId(string pageId);
    static void showFloatingWindow(bool isShowAutoScreenshot = false);
#endif

};

#endif
