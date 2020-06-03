#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "../../../colors/colors.h"
#include "../../../shapes/shapes.h"

class text_day
{
private:
	int column_x_position;
	int column_y_position;
	int column_bar_length;
	int row_bar_heigth;


	int size;
	int pos_x;
	int pos_y;
	std::string text_string;
	int text_origin_x;
	int text_origin_y;

	sf::Color ch_color;

	void day_parameters_values();
	void set_parameters_to_day();
	void set_text_origin();
public:

	shapes* shape;
	colors* color;
	sf::Font *Arial;
	void load_materials();
	void load_text();
	
	sf::Text text;
};
