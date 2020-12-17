//
//  AIHelpConfig.h
//
//  Created by AIHelp on 2020/7/28.
//

#ifndef Go2GlobalConfig_h
#define Go2GlobalConfig_h

#include "cocos2d.h"
#include <string>
using namespace std;

/* iLocalizeCocos2dxUserConfig */
class iLocalizeCocos2dxUserConfig {
private:
    string userId;
    string userTags;
public:
    iLocalizeCocos2dxUserConfig(string userId, string userTags);
    string getUserId();
    string getUserTags();
};

/* iLocalizeCocos2dxUserConfigBuilder */
class iLocalizeCocos2dxUserConfigBuilder {
private:
    string userId;
    string userTags;
public:
    iLocalizeCocos2dxUserConfigBuilder(){};
    ~iLocalizeCocos2dxUserConfigBuilder(){};
    iLocalizeCocos2dxUserConfigBuilder(const iLocalizeCocos2dxUserConfigBuilder& rBuilder);
    iLocalizeCocos2dxUserConfigBuilder setUserId(string userId);
    iLocalizeCocos2dxUserConfigBuilder setUserTags(string userTags);
    iLocalizeCocos2dxUserConfig build();
};

/* iLCheckOverflowCocos2dxConfig */
class iLCheckOverflowCocos2dxConfig {
private:
    string pageId;
    string stringId;
    string stringRealContent;
    float designWidth;
    float designHeight;
    float measuredWidth;
    float measuredHeight;
public:
    iLCheckOverflowCocos2dxConfig(string pageId, string stringId, string stringRealContent, float designWidth, float designHeight, float measuredWidth, float measuredHeight);
    string getPageId();
    string getStringId();
    string getStringRealContent();
    float getDesignWidth();
    float getDesignHeight();
    float getMeasuredWidth();
    float getMeasuredHeight();
};

/* iLCheckOverflowCocos2dxConfigBuilder */
class iLCheckOverflowCocos2dxConfigBuilder {
private:
    string pageId;
    string stringId;
    string stringRealContent;
    float designWidth;
    float designHeight;
    float measuredWidth;
    float measuredHeight;
public:
    iLCheckOverflowCocos2dxConfigBuilder(){};
    ~iLCheckOverflowCocos2dxConfigBuilder(){};
    iLCheckOverflowCocos2dxConfigBuilder(const iLCheckOverflowCocos2dxConfigBuilder& rBuilder);
    iLCheckOverflowCocos2dxConfigBuilder setPageId(string pageId);
    iLCheckOverflowCocos2dxConfigBuilder setStringId(string stringId);
    iLCheckOverflowCocos2dxConfigBuilder setStringRealContent(string stringRealContent);
    iLCheckOverflowCocos2dxConfigBuilder setDesignWidth(float designWidth);
    iLCheckOverflowCocos2dxConfigBuilder setDesignHeight(float designHeight);
    iLCheckOverflowCocos2dxConfigBuilder setMeasuredWidth(float measuredWidth);
    iLCheckOverflowCocos2dxConfigBuilder setMeasuredHeight(float measuredHeight);
    iLCheckOverflowCocos2dxConfig build();
};

#endif /* Go2GlobalConfig_h */
