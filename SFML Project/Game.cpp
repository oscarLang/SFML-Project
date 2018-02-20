#include "Game.hpp"

Game::Game()
{
	if (mBackgroundTex.loadFromFile("../Resources/background.jpg"))
	{
		// Handle error
	}
	mBackgroundSprite.setTexture(mBackgroundTex);
}

void Game::update(float dt)
{
	// Make sure everything in the game is updated (if needed).
	
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	// Make sure everything in the game is drawn.
	target.draw(handler, states);
}