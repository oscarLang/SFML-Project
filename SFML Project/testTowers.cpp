#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Tower test!");
	Game game;
	sf::Clock gameTime;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		game.update(gameTime.restart().asSeconds());
		window.clear();
		window.draw(game);
		window.display();
	}



	return 0;
}