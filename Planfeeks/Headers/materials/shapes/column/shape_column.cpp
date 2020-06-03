#include "shape_column.h"

void shape_column::load_materials()
{
	screen_heigth = &screen_parameter->get_screen_heigth();
	screen_length = &screen_parameter->get_screen_length();
}


void shape_column::shape_parameters_values()
{
	outline_thickness = 1;
	heigth = *screen_heigth;
	length = 0;
	pos_x = *screen_length / 15;
	pos_y = *screen_heigth / 8.5;
	outline_color = color->get_warm_black();
	surface_color = color->get_black();
	get_bar_length();
}

void shape_column::set_paremeters_to_column()
{
	shape.setSize(sf::Vector2f(length, heigth));
	shape.setPosition(pos_x, pos_y);
	shape.setFillColor(surface_color);
	shape.setOutlineColor(outline_color);
	shape.setOutlineThickness(outline_thickness);
}


void shape_column::create_column() {
	shape_parameters_values();
	set_paremeters_to_column();
}









void shape_column::get_bar_length()
{
	bar_length = (*screen_length - pos_x) / time->get_week_have_days();
}