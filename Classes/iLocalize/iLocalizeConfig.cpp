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