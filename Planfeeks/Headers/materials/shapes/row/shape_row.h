#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


#include "../../colors/colors.h"
#include "../../screen_parameters/screen_parameters.h"
#include "../../times/times.h"

class shape_row
{
private:
	int* screen_heigth;
	int *screen_length;
	
	void get_bar_heigth();
	
	int outline_thickness;
	int heigth;
	int length;
	int pos_x;
	int pos_y;
	sf::Color outline_color;
	sf::Color surface_color;

	void shape_parameters_values();
	void set_paremeters_to_row();
public:
	colors *color;
	screen_parameters *screen_parameter;
	times* time;

	void load_materials();
	void create_row();

	sf::RectangleShape shape;

	int bar_heigth;
};

