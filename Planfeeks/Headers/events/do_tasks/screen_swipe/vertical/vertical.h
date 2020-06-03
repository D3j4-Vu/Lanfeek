#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "../../../../materials/materials.h"

#include "rows/sw_rows.h"

class vertical: sw_rows
{
private:
	sw_rows rows;
public:
	sf::RenderWindow* window;
	materials* material;
	void load_elements();
	void load_mouse_press_y_position(int *get_mouse_press_y_position);
	
	void swipe();
	void stop_swipe();
};