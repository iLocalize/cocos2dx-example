//#include "iLocalize/iLocalizeCocos2dx.h"
#include "iLocalizeCocos2dx.h"
#include "DemoScene.h"

USING_NS_CC;

cocos2d::Scene *GameScene::createScene() {
    auto scene = Scene::create();
    auto layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

bool GameScene::init() {
    if (!Layer::init())
        return false;

//	auto BGColor = LayerColor::create(Color4B(211, 211, 211, 255));
//	this->addChild(BGColor);

    auto BGColor = LayerColor::create(Color4B(211, 211, 211, 255), winSize_width, winSize_height);
    BGColor->setPosition(Vec2::ZERO);
    this->addChild(BGColor);

    Color3B titleColor(82, 126, 250);

    auto moduleTitle = Label::createWithSystemFont("Basic", "Marker Felt", 50);
    moduleTitle->setPosition(Vec2(150, winSize_height - 70));
    moduleTitle->setColor(titleColor);
    addChild(moduleTitle);

    auto configureTitle = Label::createWithSystemFont("Screenshot", "Consolas", 50);
    configureTitle->setPosition(Vec2(450, winSize_height - 70));
    configureTitle->setColor(titleColor);
    addChild(configureTitle);

    auto otherTitle = Label::createWithSystemFont("Others", "Consolas", 50);
    otherTitle->setPosition(Vec2(750, winSize_height - 70));
    otherTitle->setColor(titleColor);
    addChild(otherTitle);

    auto logo = Sprite::create("logo.png");
    logo->setPosition(Vec2(450, 160));
    this->addChild(logo, 0);

    // ================================= Basic Functions =================================

    auto getString = MenuItemFont::create("getString",
                                            CC_CALLBACK_1(GameScene::getString, this));
    getString->setPosition(Vec2(150, 450));
    getString->setColor(Color3B(51, 51, 51));

    auto evaluateString = MenuItemFont::create("evaluateString",
                                               CC_CALLBACK_1(GameScene::evaluateString, this));
    evaluateString->setPosition(Vec2(150, 380));
    evaluateString->setColor(Color3B(51, 51, 51));

    auto updateUserInfo = MenuItemFont::create("updateUserInfo",
                                                    CC_CALLBACK_1(GameScene::updateUserInfo,
                                                                  this));
    updateUserInfo->setPosition(Vec2(150, 310));
    updateUserInfo->setColor(Color3B(51, 51, 51));

    // ================================= Basic Functions =================================

    // ================================= Screenshots =================================

    auto getPageString = MenuItemFont::create("getPageString",
                                              CC_CALLBACK_1(GameScene::getPageString, this));
    getPageString->setPosition(Vec2(450, 450));
    getPageString->setColor(Color3B(51, 51, 51));

    auto menuItemSetPageId = MenuItemFont::create("setScreenshotPageId",
                                               CC_CALLBACK_1(GameScene::setScreentshotPageId, this));
    menuItemSetPageId->setPosition(Vec2(450, 380));
    menuItemSetPageId->setColor(Color3B(51, 51, 51));

    auto showFloating = MenuItemFont::create("showFloatingWindow",
                                                CC_CALLBACK_1(GameScene::showFloatingWindow, this));
    showFloating->setPosition(Vec2(450, 310));
    showFloating->setColor(Color3B(51, 51, 51));

    // ================================= Screenshots =================================

    // ================================= Others =================================

    auto menuItemUploadLan = MenuItemFont::create("updateLanguage",
                                                  CC_CALLBACK_1(GameScene::updateLanguage, this));
    menuItemUploadLan->setPosition(Vec2(750, 450));
    menuItemUploadLan->setColor(Color3B(51, 51, 51));

    auto menuItemLog = MenuItemFont::create("Enable Logging",
                                            CC_CALLBACK_1(GameScene::setLogEnable, this));
    menuItemLog->setPosition(Vec2(750, 380));
    menuItemLog->setColor(Color3B(51, 51, 51));

    // ================================= Others =================================

    auto menu = Menu::create(getString, evaluateString, updateUserInfo,  getPageString, menuItemSetPageId,
                             showFloating, menuItemUploadLan,
                             menuItemLog, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu);

    return true;
}

// ================================= Basic Functions =================================

void GameScene::getString(cocos2d::Ref *obj) {
    CCLOGERROR("iLocalize Cocos2dx getPageString %s", iLocalizeCocos2dx::getString("Your Code").c_str());
}

void GameScene::evaluateString(cocos2d::Ref *obj) {
    iLocalizeCocos2dx::evaluateString("Your Code", "Your content");
}

void GameScene::updateUserInfo(cocos2d::Ref *obj) {
    // This API is for phrase sampling, you can sample phrase by user tags.
    // If you don't set this ,we will just ignore it.
    iLocalizeCocos2dxUserConfig userConfig = iLocalizeCocos2dxUserConfigBuilder()
            .setUserTags("pay1,s1,vip2")
            .build();
    iLocalizeCocos2dx::updateUserInfo(userConfig);
}

// ================================= Basic Functions =================================


// ================================= Screenshots =================================

void GameScene::getPageString(cocos2d::Ref *obj) {
//    CCLOGERROR("iLocalize Cocos2dx getPageString %s", iLocalizeCocos2dx::getPageString("PageId", "Code").c_str());
}

void GameScene::setScreentshotPageId(cocos2d::Ref *obj) {
//    iLocalizeCocos2dx::setScreenshotPageId("This is your page id, which should be same as getPageString().");
}

void GameScene::showFloatingWindow(cocos2d::Ref *obj) {
//    iLocalizeCocos2dx::showFloatingWindow();
}

// ================================= Screenshots =================================


// ================================= Others =================================

void GameScene::updateLanguage(cocos2d::Ref *obj) {
    iLocalizeCocos2dx::updateLanguage("zh_CN");
}

void GameScene::setLogEnable(cocos2d::Ref *obj) {
    iLocalizeCocos2dx::setLogEnable(true);
}

// ================================= Others =================================

