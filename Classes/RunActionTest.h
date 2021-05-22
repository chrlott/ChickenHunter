#ifndef __RUN_ACTION_TEST_H__
#define __RUN_ACTION_TEST_H__

#include"cocos2d.h"

using namespace cocos2d;
using namespace std;

#define winSize Director::getInstance()->getWinSize()

class Figure;

class FigureMoveLayer : public Layer{
public:
    static Scene* createScene();
    const string title() { return "MoveTestLayer Test"; }
    virtual bool init();
	virtual void update(float fDelta);
    CREATE_FUNC(FigureMoveLayer);

	void registerKeyboardEvent();
private:
	map<EventKeyboard::KeyCode, bool> keyMap;
	Figure* main_sprite_;
};


class Figure : public Sprite {
public:
	Figure();
	~Figure();

    CREATE_FUNC(Figure);
    virtual bool init();	

	//4���������󣬷ֱ�洢�������¡����ҡ����ƶ��Ķ���
	CC_SYNTHESIZE(Animate*, ani_move_down_, AniMoveDown);
	CC_SYNTHESIZE(Animate*, ani_move_left_, AniMoveLeft);
	CC_SYNTHESIZE(Animate*, ani_move_right_, AniMoveRight);
	CC_SYNTHESIZE(Animate*, ani_move_up_, AniMoveUp);
	CC_SYNTHESIZE(SpriteFrameCache*, figure_frame_cache_, FigureFrameCache);

	void initSprite();		//��ʼ����������
	void initAnimate();		//��ʼ����������

};

#endif
