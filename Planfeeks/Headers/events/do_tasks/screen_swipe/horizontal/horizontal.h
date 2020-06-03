#pragma once

#include "../../../../materials/materials.h"

#include "columns/sw_columns.h"
#include "days/sw_days.h"

#include <SFML/Graphics.hpp>
#include <iostream>

class horizontal: sw_columns, sw_days
{
private:
	sw_columns columns;
	sw_days days;
public:
	sf::RenderWindow* window;
	materials* material;

	void load_elements();
	void load_mouse_press_x_position(int *mouse_press_x_position);

	void swipe();
	void stop_swipe();
};