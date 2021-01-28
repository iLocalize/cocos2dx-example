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
    // Label-related attributes
    string fontFamily;
    float fontSize;
    float lineSpacing;
    int textAlign;
    bool isBold;
    bool isItalic;
    bool isMultipleLine;
public:
    iLCheckOverflowCocos2dxConfig(string pageId, string stringId, string stringRealContent, float designWidth, float designHeight, float measuredWidth, float measuredHeight,
                                  string fontFamily, float fontSize, float lineSpacing, int textAlign, bool isBold, bool isItalic, bool isMultipleLine);
    string getPageId();
    string getStringId();
    string getStringRealContent();
    float getDesignWidth();
    float getDesignHeight();
    float getMeasuredWidth();
    float getMeasuredHeight();
    string getFontFamily();
    float getFontSize();
    float getLineSpacing();
    int getTextAlign();
    bool getIsBold();
    bool getIsItalic();
    bool getIsMultipleLine();
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
    // Label-related attributes
    string fontFamily;
    float fontSize;
    float lineSpacing;
    int textAlign;
    bool isBold;
    bool isItalic;
    bool isMultipleLine;
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
    iLCheckOverflowCocos2dxConfigBuilder setFontFamily(string fontFamily);
    iLCheckOverflowCocos2dxConfigBuilder setFontSize(float fontSize);
    iLCheckOverflowCocos2dxConfigBuilder setLineSpacing(float lineSpacing);
    iLCheckOverflowCocos2dxConfigBuilder setTextAlign(int textAlign);
    iLCheckOverflowCocos2dxConfigBuilder setBold(bool isBold);
    iLCheckOverflowCocos2dxConfigBuilder setItalic(bool isItalic);
    iLCheckOverflowCocos2dxConfigBuilder setMultipleLine(bool isMultipleLine);
    iLCheckOverflowCocos2dxConfig build();
};

#endif /* Go2GlobalConfig_h */
