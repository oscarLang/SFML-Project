#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Tower test!");
	Game game;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		window.display();
	}



	return 0;
}