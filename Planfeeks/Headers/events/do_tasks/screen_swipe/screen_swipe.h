#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../../materials/materials.h"

#include "horizontal/horizontal.h"
#include "vertical/vertical.h"

class screen_swipe : horizontal, vertical
{
private:
public:
	sf::RenderWindow* window;
	materials *material;
	void load_elements();
	
	bool *vertical_mouse_movement_first;
	horizontal horizontal;
	vertical vertical;

	void swipe();
	void stop_swipe();

};
