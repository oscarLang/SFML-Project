#ifndef TOWERONE_H
#define TOWERONE_H
#include "towers.h"
#include "SFML\Graphics.hpp"
using namespace std;

class TowerOne:public Towers
{
private:
	sf::Texture towerTexture;
	sf::Sprite towerSprite;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
	TowerOne(int damage=0,int fireRate=0,float x=0,float y=0);
	~TowerOne();
	TowerOne *clone()const;
	void update(float dt,float ballonX,float ballonY)const;
	
};

#endif // !TOWERONE_H

