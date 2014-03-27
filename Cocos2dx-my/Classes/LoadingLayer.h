#ifndef __LoadingLayer_SCENE_H__
#define __LoadingLayer_SCENE_H__

#include "cocos2d.h"

class LoadingLayer : public cocos2d::CCLayer
{
public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(LoadingLayer);
    void goHome(CCObject* sender);
};
#endif