#ifndef GAME_HPP
#define GAME_HPP
#include "towerHandler.h"
#include <SFML\Graphics.hpp>

class Game : public sf::Drawable
{
private:
	sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;
	TowerHandler handler;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	Game();

	void update(float dt);


};
#endif