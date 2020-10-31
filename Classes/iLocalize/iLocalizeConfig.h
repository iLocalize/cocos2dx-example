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
    string userTags;
public:
    iLocalizeCocos2dxUserConfig(string userTags);
    string getUserTags();
};

/* iLocalizeCocos2dxUserConfigBuilder */
class iLocalizeCocos2dxUserConfigBuilder {
private:
    string userTags;
public:
    iLocalizeCocos2dxUserConfigBuilder(){};
    ~iLocalizeCocos2dxUserConfigBuilder(){};
    iLocalizeCocos2dxUserConfigBuilder(const iLocalizeCocos2dxUserConfigBuilder& rBuilder);
    iLocalizeCocos2dxUserConfigBuilder setUserTags(string userTags);
    iLocalizeCocos2dxUserConfig build();
};

#endif /* Go2GlobalConfig_h */
