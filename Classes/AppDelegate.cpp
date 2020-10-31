#include <iLocalize/iLocalizeCocos2dx.h>
#include "AppDelegate.h"
#include "DemoScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
}

AppDelegate::~AppDelegate() {
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs() {
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

void onTranslationPrepared(bool success) {
    // do something you want
    CCLOG("iLocalize onTranslationPrepared");
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if (!glview) {
        glview = GLViewImpl::createWithRect("iLocalize Demo", Rect(0, 0, 900, 600));
        director->setOpenGLView(glview);
    }

    director->getOpenGLView()->setDesignResolutionSize(900, 600, ResolutionPolicy::SHOW_ALL);

    // turn on display FPS
    director->setDisplayStats(false);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    FileUtils::getInstance()->addSearchPath("res");

    // create a scene. it's an autorelease object
    auto scene = GameScene::createScene();

    // run
    director->runWithScene(scene);

    // init AIHelp
    iLocalizeCocos2dx::setLogEnable(true);
    iLocalizeCocos2dx::init(
            "YOUR APP KEY",
            "YOUR TARGET LANGUAGE",
            true,
            true);

    iLocalizeCocos2dx::setTranslationPreparedCallback(onTranslationPrepared);

    return true;
}


// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();
}
