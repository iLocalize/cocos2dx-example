#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__

#include "cocos2d.h"

#define winSize_width 900
#define winSize_height 600

class GameScene : public cocos2d::Layer
{
public:

	static cocos2d::Scene * createScene();
	virtual bool init();
	CREATE_FUNC(GameScene);

	// modules
	void getString(cocos2d::Ref *obj);
	void evaluateString(cocos2d::Ref *obj);
	void updateUserInfo(cocos2d::Ref *obj);

	// configuration
	void getPageString(Ref *obj);
	void setScreentshotPageId(Ref *obj);
	void showFloatingWindow(Ref *obj);

	// others
    void updateLanguage(Ref *obj);
	void setLogEnable(Ref *obj);

};

#endif
