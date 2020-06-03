#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "../../../colors/colors.h"
#include "../../../shapes/shapes.h"

class text_hour
{
private:

	int row_x_position;
	int row_y_position;

	int size;
	int pos_x;
	int pos_y;
	sf::Color ch_color;
	std::string text_string;

	int text_origin_x;
	int text_origin_y;


	void hour_parameters_values();
	void set_parameters_to_hour();
	void set_text_origin();
public:

	shapes* shape;
	colors* color;
	sf::Font *Arial;
	void load_materials();
	void load_text();
	
	sf::Text text;
};
