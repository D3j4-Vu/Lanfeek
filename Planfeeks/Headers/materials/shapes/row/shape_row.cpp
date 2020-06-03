#include "shape_row.h"

void shape_row::load_materials()
{
	screen_length = &screen_parameter->get_screen_length();
	screen_heigth = &screen_parameter->get_screen_heigth();
}

void shape_row::create_row() {
	shape_parameters_values();
	set_paremeters_to_row();
}

void shape_row::shape_parameters_values() {
	outline_thickness = 1;
	heigth = 0;
	length = *screen_length;
	pos_x = *screen_length / 18;
	pos_y = *screen_heigth / 7.5;
	outline_color = color->get_warm_grey();
	surface_color = color->get_black();
	get_bar_heigth();
}

void shape_row::set_paremeters_to_row() {
	shape.setSize(sf::Vector2f(length, heigth));
	shape.setPosition(pos_x, pos_y);
	shape.setFillColor(surface_color);
	shape.setOutlineColor(outline_color);
	shape.setOutlineThickness(outline_thickness);
}

void shape_row::get_bar_heigth()
{
	bar_heigth = (*screen_heigth - pos_y) / time->get_third_of_day_have_hours();
}
