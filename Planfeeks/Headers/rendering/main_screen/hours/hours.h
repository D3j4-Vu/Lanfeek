#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../../materials/materials.h"



class hours
{
private:
	sf::Text *hour;
	int *screen_heigth;
	
	int draw_hours_from_x;
	int draw_hours_from_y;

	int hour_number;
	int temp_hour_number;

	void draw_moving_hour();

	int standing_hour_x_position = 0;
	int first_hour_y_position = 0;

	int hour_bar_heigth=0;

	void get_first_hour_y_position();
	void set_hour_to_first_hour_y_position();

	void get_temp();
	void set_temp();

	std::string get_hours_numbers();

public:
	materials *material;
	sf::RenderWindow* window;
	void load_materials();

	void draw();


};

