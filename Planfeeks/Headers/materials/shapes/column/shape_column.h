#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "../../times/times.h"
#include "../../colors/colors.h"
#include "../../screen_parameters/screen_parameters.h"


class shape_column
{
private:
	int *screen_heigth;
	int* screen_length;

	void get_bar_length();

	int outline_thickness;
	int heigth;
	int length;
	int pos_x;
	int pos_y;
	sf::Color outline_color;
	sf::Color surface_color;

	void shape_parameters_values();
	void set_paremeters_to_column();
public:
	colors *color;
	times *time;
	screen_parameters *screen_parameter;
	void load_materials();

	void create_column();

	sf::RectangleShape shape;
	
	int bar_length;
};

