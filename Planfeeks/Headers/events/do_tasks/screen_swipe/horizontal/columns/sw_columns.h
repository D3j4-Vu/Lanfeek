#pragma once

#include "../../../../../materials/materials.h"

#include <SFML/Graphics.hpp>
#include <iostream>

class sw_columns
{
private:

	sf::RectangleShape* column;

	int* screen_length;

	int column_bar_length;

	int week_have_days;

	int last_frame_x_mouse_movement_length = 0;
	int mouse_x_position;
	int column_x_position;

	void get_x_positions();
	void get_column_x_position();
	void get_mouse_x_position();
	int x_mouse_movement_lengt();
	void get_last_frame_x_mouse_movement_length();

public:
	sf::RenderWindow* window;
	materials* material;
	int *mouse_press_x_position;

	void load_elements();
	void swipe();
	void stop_swipe();
};