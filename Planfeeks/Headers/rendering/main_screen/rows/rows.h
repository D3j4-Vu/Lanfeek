#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../../materials/materials.h"



class rows
{
private:
	sf::RectangleShape *row;
	int *screen_heigth;
	
	int draw_rows_from_x;
	int draw_rows_from_y;

	void draw_standing_row();
	void draw_moving_row();

	bool rows_behind_standing_row(int i);

	int standing_row_x_position = 0;
	int first_row_y_position = 0;

	int row_bar_heigth=0;

	void get_first_row_y_position();
	void set_row_to_first_row_y_position();

public:
	materials *material;
	sf::RenderWindow* window;
	void load_materials();

	void draw();


};

