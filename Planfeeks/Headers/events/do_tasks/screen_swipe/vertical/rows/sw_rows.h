#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "../../../../../materials/materials.h"


class sw_rows
{
private:
	sf::RectangleShape* row;
	int* screen_heigth;

	int row_bar_heigth;
	
	int row_start_y_point;
	int third_of_day_have_hours;


	int last_frame_y_mouse_movement_heigth = 0;
	int mouse_y_position;
	int row_y_position;
	int full_y_movement_length = 0;

	bool y_movement_not_beyond_day_hours_interval();


	void fix_column_position_if_mouse_jumped_throw_day_hours_interval();

	void take_back_mouse_position_to_day_hours_interval();

	void get_y_positions();
	void get_column_y_position();
	void get_mouse_y_position();
	int y_mouse_movement_heigth();
	void get_last_frame_y_mouse_movement_length();
	int row_rendering_space_heigth();
public:
	sf::RenderWindow* window;
	materials* material;
	int *mouse_press_y_position;
	void load_elements();
	
	void swipe();
	void stop_swipe();
};