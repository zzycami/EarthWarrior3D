//
//  ScrollingBackground.h
//  Moon3d
//
//  Created by Hao Wu on 2/24/14.
//
//

#ifndef __Moon3d__GameLayer__
#define __Moon3d__GameLayer__
#include "cocos2d.h"
#include "Player.h"
#include "Fodder.h"
USING_NS_CC;


class GameLayer : public Layer
{
public:
    virtual bool init();
    void update(float dt);
    CREATE_FUNC(GameLayer);
protected:
    float xScroll = 0.0f;
    float speed = -60.0f;
    Sprite *spr;
    Player *_player;
    Vector<GameEntity*> Enemies;
};
#endif /* defined(__Moon3d__GameLayer__) */