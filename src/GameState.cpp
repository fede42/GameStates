#include "GameState.h"
#include "GameStateManager.h"

void GameState::changeState(GameState * gState, GameStateManager * stateMgr)
{
	stateMgr->changeState(gState);
}
