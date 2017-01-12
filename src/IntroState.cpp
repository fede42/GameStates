#include "IntroState.h"
#include "ofGraphics.h"
#include "ofAppRunner.h"
#include "GameStateManager.h"
#include "PlayState.h"

void IntroState::setup()
{
}

void IntroState::update()
{
}

void IntroState::draw()
{
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 50);
}

void IntroState::exit()
{
	std::cout << "Deleting Intro State...";
	delete this;
}

void IntroState::keyPressed(int key)
{
	if (key == 'a' || key == 'A')
	{
		PlayState *playState = new PlayState();
		GameStateManager *stateMgr = GameStateManager::getInstance();
		changeState(playState, stateMgr);
	}
}

void IntroState::keyReleased(int key)
{
}

void IntroState::mouseMoved(int x, int y)
{
}

void IntroState::mouseDragged(int x, int y, int button)
{
}

void IntroState::mousePressed(int x, int y, int button)
{
}

void IntroState::mouseReleased(int x, int y, int button)
{
}
