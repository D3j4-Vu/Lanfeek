#pragma once

#include "../../../../../materials/materials.h"

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class sw_days
{
private:

	sf::Text* day;

	int* screen_length;

	int column_bar_length;

	int week_have_days;

	int last_frame_x_mouse_movement_length = 0;
	int mouse_x_position;
	int day_x_position;

	void get_x_positions();
	void get_day_x_position();
	void get_mouse_x_position();
	int x_mouse_movement_lengt();
	void get_last_frame_x_mouse_movement_length();

	void day_number_pp();
	void day_number_mm();

	std::string temp_string;
	int sf_string_to_int(sf::String sf_string);
public:
	sf::RenderWindow* window;
	materials* material;
	int *mouse_press_x_position;

	void load_elements();
	void swipe();
	void stop_swipe();
};