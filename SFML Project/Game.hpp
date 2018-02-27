#ifndef GAME_HPP
#define GAME_HPP
#include "towerHandler.h"
#include <SFML\Graphics.hpp>

class Game : public sf::Drawable
{
private:

	TowerHandler *handler;
	sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	void update(float dt);
	Game();
	virtual ~Game();


};
#endif