#include "sw_rows.h"

void sw_rows::load_elements()
{
	row = &material->shape.get_row();
	screen_heigth = &material->screen_parameter.get_screen_heigth();
	screen_heigth = &material->screen_parameter.get_screen_heigth();
	row_start_y_point = row->getPosition().y;
	third_of_day_have_hours = material->time.get_third_of_day_have_hours();
	row_bar_heigth = material->shape.get_row_bar_heigth();
}




void sw_rows::swipe()
{
	get_y_positions();
	if (y_movement_not_beyond_day_hours_interval())
		row->setPosition(0, (row_y_position - y_mouse_movement_heigth()) % row_bar_heigth);
	else {
		fix_column_position_if_mouse_jumped_throw_day_hours_interval();
		take_back_mouse_position_to_day_hours_interval();
	}
	full_y_movement_length += y_mouse_movement_heigth();
	get_last_frame_y_mouse_movement_length();
}

void sw_rows::stop_swipe()
{
	last_frame_y_mouse_movement_heigth = 0;
}

void sw_rows::fix_column_position_if_mouse_jumped_throw_day_hours_interval() {
	row->setPosition(0, row_start_y_point);
}

void sw_rows::take_back_mouse_position_to_day_hours_interval() {
		if (full_y_movement_length > 0)full_y_movement_length = row_rendering_space_heigth();
		else full_y_movement_length = -1 * row_rendering_space_heigth();
}

void sw_rows::get_y_positions()
{
	get_column_y_position();
	get_mouse_y_position();
}

bool sw_rows::y_movement_not_beyond_day_hours_interval() {
	return full_y_movement_length < row_rendering_space_heigth() && full_y_movement_length > -1 * row_rendering_space_heigth();
}

void sw_rows::get_column_y_position()
{
	row_y_position = row->getPosition().y;
}

void sw_rows::get_mouse_y_position()
{
	mouse_y_position = sf::Mouse::getPosition().y;
}

int sw_rows::y_mouse_movement_heigth()
{
	return (*mouse_press_y_position - mouse_y_position) - last_frame_y_mouse_movement_heigth;
}

void sw_rows::get_last_frame_y_mouse_movement_length()
{
	last_frame_y_mouse_movement_heigth = *mouse_press_y_position - mouse_y_position;
}

int sw_rows::row_rendering_space_heigth() {
	return	*screen_heigth - row_start_y_point;
}
