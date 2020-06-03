#include "sw_columns.h"



void sw_columns::load_elements()
{
	column = &material->shape.get_column();
	screen_length = &material->screen_parameter.get_screen_length();
	week_have_days = material->time.get_week_have_days();
	column_bar_length = material->shape.get_column_bar_length();
}



void sw_columns::swipe()
{
		get_x_positions();
		column->setPosition((column_x_position - x_mouse_movement_lengt())%column_bar_length, 0);
		get_last_frame_x_mouse_movement_length();
}

void sw_columns::stop_swipe()
{
	last_frame_x_mouse_movement_length = 0;
}









void sw_columns::get_x_positions()
{
	get_column_x_position();
	get_mouse_x_position();

}

void sw_columns::get_column_x_position()
{
	column_x_position = column->getPosition().x;
}

void sw_columns::get_mouse_x_position()
{
	mouse_x_position = sf::Mouse::getPosition().x;
}

int sw_columns::x_mouse_movement_lengt()
{
	return (*mouse_press_x_position - mouse_x_position) - last_frame_x_mouse_movement_length;
}

void sw_columns::get_last_frame_x_mouse_movement_length()
{
	last_frame_x_mouse_movement_length = *mouse_press_x_position - mouse_x_position;
}


