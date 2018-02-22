#ifndef GAME_HPP
#define GAME_HPP
#include "towers.h"
#include <SFML\Graphics.hpp>

class Game : public sf::Drawable
{
private:

	Towers * *towers;
	int towerCapacty;
	int nrOfTowers;
	void initiateTowers(int from = 0);
	void expandTowers();
	void freeMemory();
	sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	void update(float dt);
	Game(int towCap = 10);
	~Game();


};
#endif