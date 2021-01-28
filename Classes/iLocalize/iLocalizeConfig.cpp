//
//  AIHelpConfig.cpp
//
//  Created by AIHelp on 2020/7/29.
//

#include "iLocalizeConfig.h"

USING_NS_CC;

/* iLocalizeCocos2dxUserConfig */
iLocalizeCocos2dxUserConfig::iLocalizeCocos2dxUserConfig(string userId, string userTags)
        : userId(userId), userTags(userTags) {
}

string iLocalizeCocos2dxUserConfig::getUserId() {
    return userId;
}

string iLocalizeCocos2dxUserConfig::getUserTags() {
    return userTags;
}

iLocalizeCocos2dxUserConfigBuilder iLocalizeCocos2dxUserConfigBuilder::setUserId(string userId) {
    iLocalizeCocos2dxUserConfigBuilder builder(*this);
    builder.userId = userId;
    return builder;
}

/* iLocalizeCocos2dxUserConfigBuilder */
iLocalizeCocos2dxUserConfigBuilder::iLocalizeCocos2dxUserConfigBuilder(
        const iLocalizeCocos2dxUserConfigBuilder &rBuilder) {
    this->userId = rBuilder.userId;
    this->userTags = rBuilder.userTags;
}

iLocalizeCocos2dxUserConfigBuilder
iLocalizeCocos2dxUserConfigBuilder::setUserTags(string userTags) {
    iLocalizeCocos2dxUserConfigBuilder builder(*this);
    builder.userTags = userTags;
    return builder;
}

iLocalizeCocos2dxUserConfig iLocalizeCocos2dxUserConfigBuilder::build() {
    return iLocalizeCocos2dxUserConfig(userId, userTags);
}


/* iLCheckOverflowCocos2dxConfig */
iLCheckOverflowCocos2dxConfig::iLCheckOverflowCocos2dxConfig(string pageId, string stringId,
                                                             string stringRealContent,
                                                             float designWidth, float designHeight,
                                                             float measuredWidth,
                                                             float measuredHeight,
                                                             string fontFamily, float fontSize,
                                                             float lineSpacing, int textAlign,
                                                             bool isBold, bool isItalic,
                                                             bool isMultipleLine)
        : pageId(pageId), stringId(stringId), stringRealContent(stringRealContent),
          designWidth(designWidth), designHeight(designHeight), measuredWidth(measuredWidth),
          measuredHeight(measuredHeight),
          fontFamily(fontFamily), fontSize(fontSize), lineSpacing(lineSpacing),
          textAlign(textAlign), isBold(isBold), isItalic(isItalic), isMultipleLine(isMultipleLine) {
}

string iLCheckOverflowCocos2dxConfig::getPageId() {
    return pageId;
}

string iLCheckOverflowCocos2dxConfig::getStringId() {
    return stringId;
}

string iLCheckOverflowCocos2dxConfig::getStringRealContent() {
    return stringRealContent;
}

float iLCheckOverflowCocos2dxConfig::getDesignWidth() {
    return designWidth;
}

float iLCheckOverflowCocos2dxConfig::getDesignHeight() {
    return designHeight;
}

float iLCheckOverflowCocos2dxConfig::getMeasuredWidth() {
    return measuredWidth;
}

float iLCheckOverflowCocos2dxConfig::getMeasuredHeight() {
    return measuredHeight;
}

string iLCheckOverflowCocos2dxConfig::getFontFamily() {
    return fontFamily;
}

float iLCheckOverflowCocos2dxConfig::getFontSize() {
    return fontSize;
}

float iLCheckOverflowCocos2dxConfig::getLineSpacing() {
    return lineSpacing;
}

int iLCheckOverflowCocos2dxConfig::getTextAlign() {
    return textAlign;
}

bool iLCheckOverflowCocos2dxConfig::getIsBold() {
    return isBold;
}

bool iLCheckOverflowCocos2dxConfig::getIsItalic() {
    return isItalic;
}

bool iLCheckOverflowCocos2dxConfig::getIsMultipleLine() {
    return isMultipleLine;
}

/* iLocalizeCocos2dxUserConfigBuilder */
iLCheckOverflowCocos2dxConfigBuilder::iLCheckOverflowCocos2dxConfigBuilder(
        const iLCheckOverflowCocos2dxConfigBuilder &rBuilder) {
    this->pageId = rBuilder.pageId;
    this->stringId = rBuilder.stringId;
    this->stringRealContent = rBuilder.stringRealContent;
    this->designWidth = rBuilder.designWidth;
    this->designHeight = rBuilder.designHeight;
    this->measuredWidth = rBuilder.measuredWidth;
    this->measuredHeight = rBuilder.measuredHeight;
    this->fontFamily = rBuilder.fontFamily;
    this->fontSize = rBuilder.fontSize;
    this->lineSpacing = rBuilder.lineSpacing;
    this->textAlign = rBuilder.textAlign;
    this->isBold = rBuilder.isBold;
    this->isItalic = rBuilder.isItalic;
    this->isMultipleLine = rBuilder.isMultipleLine;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setPageId(string pageId) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.pageId = pageId;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setStringId(string stringId) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.stringId = stringId;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setStringRealContent(string stringRealContent) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.stringRealContent = stringRealContent;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setDesignWidth(float designWidth) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.designWidth = designWidth;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setDesignHeight(float designHeight) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.designHeight = designHeight;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setMeasuredWidth(float measuredWidth) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.measuredWidth = measuredWidth;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setMeasuredHeight(float measuredHeight) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.measuredHeight = measuredHeight;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setFontFamily(string fontFamily) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.fontFamily = fontFamily;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setFontSize(float fontSize) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.fontSize = fontSize;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setLineSpacing(float lineSpacing) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.lineSpacing = lineSpacing;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setTextAlign(int textAlign) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.textAlign = textAlign;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setBold(bool bold) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.isBold = bold;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setItalic(bool italic) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.isItalic = italic;
    return builder;
}

iLCheckOverflowCocos2dxConfigBuilder
iLCheckOverflowCocos2dxConfigBuilder::setMultipleLine(bool multipleLine) {
    iLCheckOverflowCocos2dxConfigBuilder builder(*this);
    builder.isMultipleLine = multipleLine;
    return builder;
}

iLCheckOverflowCocos2dxConfig iLCheckOverflowCocos2dxConfigBuilder::build() {
    return iLCheckOverflowCocos2dxConfig(pageId, stringId, stringRealContent, designWidth,
                                         designHeight, measuredWidth, measuredHeight,
                                         fontFamily, fontSize, lineSpacing, textAlign, isBold,
                                         isItalic, isMultipleLine);
}
