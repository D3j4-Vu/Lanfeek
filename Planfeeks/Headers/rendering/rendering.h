#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../materials/materials.h"


#include "main_screen/main_screen.h"

class rendering: main_screen
{
private:
	main_screen main_screen;
public:
	materials *material;
	sf::RenderWindow* window;
	
	void load_materials();

	void main_window();
};

