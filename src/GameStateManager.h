#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H

#include <vector>
//#include "GameState.h"

class GameState;

class GameStateManager
{
private:
	GameStateManager();
	static GameStateManager *_gStateMgr;

public:
	static GameStateManager *getInstance();

	std::vector<GameState*> states;
	void changeState(GameState *gState);

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
};

#endif // !GAME_STATE_MANAGER_H
