#ifndef TOWERONE_H
#define TOWERONE_H
#include "towers.h";
#include "SFML\Graphics.hpp"
using namespace std;

class TowerOne:public Towers , public sf::Drawable
{
private:
	sf::Texture towerTexture;
	sf::Sprite towerSprite;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
	TowerOne(int damage=0,int fireRate=0,float x=0,float y=0);
	~TowerOne();
	void update(float dt)const;
	TowerOne *clone()const;
};

#endif // !TOWERONE_H

