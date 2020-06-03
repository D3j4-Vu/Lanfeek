#include "sw_days.h"



void sw_days::load_elements()
{
	day = &material->text.main_screen.get_day();
	screen_length = &material->screen_parameter.get_screen_length();
	week_have_days = material->time.get_week_have_days();
	column_bar_length = material->shape.get_column_bar_length();
}



void sw_days::swipe()
{
		get_x_positions();
		if (day_x_position - x_mouse_movement_lengt() >= column_bar_length) {
			day_number_mm();
		}
		else if (day_x_position - x_mouse_movement_lengt() <= -column_bar_length) {
			day_number_pp();
		}
		day->setPosition((day_x_position - x_mouse_movement_lengt())%column_bar_length, 0); //!dont set position in swiping, only in rendering

		get_last_frame_x_mouse_movement_length();
}

void sw_days::stop_swipe()
{
	last_frame_x_mouse_movement_length = 0;
}









void sw_days::get_x_positions()
{
	get_day_x_position();
	get_mouse_x_position();

}

void sw_days::get_day_x_position()
{
	day_x_position = day->getPosition().x;
}

void sw_days::get_mouse_x_position()
{
	mouse_x_position = sf::Mouse::getPosition().x;
}

int sw_days::x_mouse_movement_lengt()
{
	return (*mouse_press_x_position - mouse_x_position) - last_frame_x_mouse_movement_length;
}

void sw_days::get_last_frame_x_mouse_movement_length()
{
	last_frame_x_mouse_movement_length = *mouse_press_x_position - mouse_x_position;
}

void sw_days::day_number_pp()
{	
	day->setString(std::to_string(sf_string_to_int(day->getString()) + 1));
}

void sw_days::day_number_mm()
{
	day->setString(std::to_string(sf_string_to_int(day->getString()) - 1));

}

int sw_days::sf_string_to_int(sf::String sf_string)
{
	temp_string = sf_string;
	return std::stoi(temp_string);
}
