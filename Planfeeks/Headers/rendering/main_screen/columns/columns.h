#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../../materials/materials.h"


class columns
{
private:
	sf::RectangleShape *column;
	int *screen_length;
	
	int draw_columns_from_x;
	int draw_columns_from_y;

	int column_bar_length;

	void draw_standing_column();
	void draw_moving_columns();

	bool columns_behind_standing_column(int i);

	int first_column_x_position = 0;

	void get_first_column_x_position();
	void set_column_to_first_column_x_position();
public:
	materials *material;
	sf::RenderWindow* window;
	void load_materials();

	void draw();
};

