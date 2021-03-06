#ifndef TOWERS_H
#define TOWERS_H
#include <SFML\Graphics.hpp>
using namespace std;
class Towers :public sf::Drawable
{
private:
	int damage;
	int fireRate;
	float angle;
	sf::Vector2f pos;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const=0;
	//int price;
public:
	Towers(int damage, int fireRate, float x,float y);
	Towers(const Towers &orgObj);
	virtual ~Towers();
	Towers& operator=(const Towers &orgObj);
	void setDamage(int damage);
	int getDamage();
	void setFireRate(int fireRate);
	int getFireRate();
	sf::Vector2f getPos();
	void setPos( float x,float y);
	virtual Towers *clone()const = 0;
	virtual void update(float dt, float ballonX, float ballonY)const = 0;
};
#endif // !TOWERS_H
