#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>
#include "towerHandler.h"

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Tower test!");
	TowerHandler handler;
	handler.addTowerOne(10, 3, 20, 20);
	handler.addTowerOne(20, 5, 100, 100);

	while (window.isOpen())
	{
		window.draw(handler);
	}



	return 0;
}