#include "towerOne.h"

void TowerOne::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->towerSprite, states);
}

TowerOne::TowerOne(int damage,int fireRate,float x,float y)
	:Towers(damage,fireRate,x,y)
{
	this->towerTexture.loadFromFile("../Resources/tower1.png");
	this->towerSprite.setTexture(this->towerTexture);
}

TowerOne::~TowerOne()
{

}

void TowerOne::update(float dt)const
{

}

TowerOne * TowerOne::clone() const
{
	return new TowerOne(*this);
}
