#include "Game.hpp"

Game::Game(int towCap)
{
	if (mBackgroundTex.loadFromFile("../Resources/background.png"))
	{
		// Handle error
	}
	mBackgroundSprite.setTexture(mBackgroundTex);
	this->towerCapacty = towCap;
	this->nrOfTowers = 0;
	this->towers = new Towers*[this->towerCapacty];
}

Game::~Game()
{
	this->freeMemory();
}

void Game::update(float dt)
{
	// Make sure everything in the game is updated (if needed).
	
}



void Game::initiateTowers(int from)
{
	for (int i = from; i < this->towerCapacty; i++)
	{
		this->towers[i] = nullptr;
	}
}

void Game::expandTowers()
{
	this->towerCapacty += 10;
	Towers* *temp = new Towers*[this->towerCapacty];
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		temp[i] = this->towers[i];
	}
	delete[] this->towers;
	this->towers = temp;
}

void Game::freeMemory()
{
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		delete this->towers[i];
		this->towers[i] = nullptr;
	}
	delete[] this->towers;
	this->towers = nullptr;
	this->nrOfTowers = 0;
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	// Make sure everything in the game is drawn.
	target.draw(mBackgroundSprite, states);
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		target.draw(towers[i]->draw,states);
	}
	
	
}