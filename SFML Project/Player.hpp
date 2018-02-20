#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML\Graphics.hpp>
//hantera inputs och liknande
class Player : public sf::Drawable
{
public:
	void Update(float dt);

private:
	sf::Texture mTexture;
	sf::Sprite mSprite;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};
#endif