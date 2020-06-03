#pragma once

#include <SFML/Graphics.hpp>


class colors
{
private:
	sf::Color black;
	sf::Color warm_grey;
	sf::Color warm_black;
	sf::Color paper;

public:
	void load_colors();
	
	sf::Color get_black();
	sf::Color get_warm_grey();
	sf::Color get_warm_black();
	sf::Color get_paper();
};
