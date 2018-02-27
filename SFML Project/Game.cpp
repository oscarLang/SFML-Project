#include "Game.hpp"
#include "towerHandler.h"
Game::Game()
{
	if (this->mBackgroundTex.loadFromFile("../Resources/background.png"))
	{
		// Handle error
	}
	this->mBackgroundSprite.setTexture(this->mBackgroundTex);
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
	target.draw(this->mBackgroundSprite, states);
	target.draw(this->handler, states);
	
	
}