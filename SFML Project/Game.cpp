#include "Game.hpp"
#include "towerHandler.h"
Game::Game()
{
	if (mBackgroundTex.loadFromFile("../Resources/background.png"))
	{
		// Handle error
	}
	mBackgroundSprite.setTexture(mBackgroundTex);
}

Game::~Game()
{
	
}

void Game::update(float dt)
{
	// Make sure everything in the game is updated (if needed).
	
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	// Make sure everything in the game is drawn.
	target.draw(mBackgroundSprite, states);
	target.draw(handler, states);
	
	
}