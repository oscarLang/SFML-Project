#include "towerHandler.h"
#include "towers.h"
#include "towerOne.h"
void TowerHandler::initiate(int from)
{
	for (int i = from; i < this->capacity; i++)
	{
		this->towers[i] = nullptr;
	}
}

void TowerHandler::expand()
{
	this->capacity += 10;
	Towers* *temp = new Towers*[this->capacity];
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		temp[i] = this->towers[i];
	}
	delete[] this->towers;
	this->towers = temp;
}

void TowerHandler::freeMemory()
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

void TowerHandler::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		target.draw(*towers[i], states);
	}
}

TowerHandler::TowerHandler(int capacity)
{
	this->capacity = capacity;
	this->nrOfTowers = 0;
	this->towers = new Towers*[this->capacity];
	this->initiate();
}

TowerHandler::TowerHandler(const TowerHandler & orgObj)
{
	this->capacity = orgObj.capacity;
	this->nrOfTowers = orgObj.nrOfTowers;
	this->towers = new Towers*[this->capacity];
	for (int i = 0; i < this->nrOfTowers; i++)
	{
		this->towers[i] = orgObj.towers[i]->clone();
	}
	this->initiate(this->nrOfTowers);
}

TowerHandler::~TowerHandler()
{
	this->freeMemory();
}

TowerHandler & TowerHandler::operator=(const TowerHandler & orgObj)
{
	if (this != &orgObj)
	{
		this->freeMemory();
		this->capacity = orgObj.capacity;
		this->nrOfTowers = orgObj.nrOfTowers;
		this->towers = new Towers*[this->capacity];

		TowerOne* towerOne = nullptr;
		for (int i = 0; i < this->nrOfTowers; i++)
		{
			towerOne = dynamic_cast<TowerOne*>(orgObj.towers[i]);
			if (towerOne != nullptr)
			{
				this->towers[i] = new TowerOne(*towerOne);
			}
			//Lägg till towerTwo
		}
		this->initiate(orgObj.nrOfTowers);

	}
	return *this;
}

void TowerHandler::addTowerOne(int damage, int fireRate,float x,float y)
{
	if (this->nrOfTowers == this->capacity)
	{
		this->expand();
	}
	this->towers[this->nrOfTowers++] = new TowerOne(damage, fireRate,x,y);
}
