#include "towers.h"

Towers::Towers(int damage, int fireRate, float x,float y)
{
	this->damage = damage;
	this->fireRate = fireRate;
	this->pos = sf::Vector2f(x,y);
}
//copykonstruktor
Towers::Towers(const Towers & orgObj)
{
	this->damage = orgObj.damage;
	this->fireRate = orgObj.fireRate;
	this->pos = orgObj.pos;
}


Towers::~Towers()
{
}
//tilldelning
Towers & Towers::operator=(const Towers & orgObj)
{
	if (this != &orgObj)
	{
		this->damage = orgObj.damage;
		this->fireRate = orgObj.fireRate;
		this->pos = orgObj.pos;
	}
	return *this;
}

void Towers::setDamage(int damage)
{
	this->damage = damage;
}

int Towers::getDamage()
{
	return this->damage;
}

void Towers::setFireRate(int fireRate)
{
	this->fireRate = fireRate;
}

int Towers::getFireRate()
{
	return this->fireRate;
}

sf::Vector2f Towers::getPos()
{
	return this->pos;
}

void Towers::setPos(float x, float y)
{
	this->pos = sf::Vector2f(x,y);
}


