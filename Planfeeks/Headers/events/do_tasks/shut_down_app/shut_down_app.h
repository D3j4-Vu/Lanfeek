#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../../materials/materials.h"

class shut_down_app
{
private:

public:
	sf::RenderWindow* window;

	void close_app();
};