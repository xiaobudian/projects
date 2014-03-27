#include "LoadingLayer.h"
#include "HelloWorldScene.h"

USING_NS_CC;

CCScene * LoadingLayer::scene()
{
    CCScene *s = CCScene::create();
    CCLayer *l = LoadingLayer::create();
    s->addChild(l);
    return s;
}

bool LoadingLayer::init()
{
    if (!CCLayer::init())
    {
        return false;
    }

    CCSprite *s = CCSprite::create("aboutus.png");
    CCSize size=  CCDirector::sharedDirector()->getWinSize();
    s->setPosition(ccp(size.width/2,size.height/2));
    this->addChild(s);
    CCMenuItemImage* menuItem = CCMenuItemImage::create("exit.png","exit.png",this,menu_selector(LoadingLayer::goHome));
    menuItem->setPosition(ccp(size.width/2,size.height/2));
    CCMenu *menus = CCMenu::create(menuItem,NULL);
    menus->setPosition(CCPointZero);
    this->addChild(menus);
    return true;
}

void LoadingLayer::goHome(CCObject* sender)
{
    CCScene* s= HelloWorld::scene();
    CCDirector::sharedDirector()->replaceScene(s);
}