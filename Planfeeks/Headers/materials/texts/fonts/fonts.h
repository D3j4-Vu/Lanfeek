#pragma once
#include <SFML/Graphics.hpp>


class fonts
{
private:
	sf::Font Arial;
public:
	void load_fonts();

	sf::Font &get_Arial();
};
