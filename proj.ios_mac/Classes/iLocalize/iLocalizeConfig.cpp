//
//  AIHelpConfig.cpp
//
//  Created by AIHelp on 2020/7/29.
//

#include "iLocalizeConfig.h"
USING_NS_CC;

/* iLocalizeCocos2dxUserConfig */
iLocalizeCocos2dxUserConfig::iLocalizeCocos2dxUserConfig(string userTags)
    :userTags(userTags){
}

string iLocalizeCocos2dxUserConfig::getUserTags() {
    return userTags;
}

/* iLocalizeCocos2dxUserConfigBuilder */
iLocalizeCocos2dxUserConfigBuilder::iLocalizeCocos2dxUserConfigBuilder(const iLocalizeCocos2dxUserConfigBuilder& rBuilder){
    this->userTags = rBuilder.userTags;
}

iLocalizeCocos2dxUserConfigBuilder iLocalizeCocos2dxUserConfigBuilder::setUserTags(string userTags) {
    iLocalizeCocos2dxUserConfigBuilder builder(*this);
    builder.userTags = userTags;
    return builder;
}

iLocalizeCocos2dxUserConfig iLocalizeCocos2dxUserConfigBuilder::build() {
    return iLocalizeCocos2dxUserConfig(userTags);
}