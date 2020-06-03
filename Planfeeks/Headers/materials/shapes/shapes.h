#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "../screen_parameters/screen_parameters.h"
#include "../colors/colors.h"
#include "../times/times.h"
#include "column/shape_column.h"
#include "row/shape_row.h"

class shapes: shape_column, shape_row
{
private:

	shape_column column;
	shape_row row;

public:
	void load_materials();
	colors *color;
	times *time;
	screen_parameters *screen_parameter;
	
	sf::RectangleShape &get_column() {
		return column.shape;
	}

	sf::RectangleShape& get_row() {
		return row.shape;
	}

	int get_row_bar_heigth();
	int get_column_bar_length();
};

