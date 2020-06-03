#include "hours.h"




void hours::load_materials()
{
	screen_heigth = &material->screen_parameter.get_screen_heigth();
	hour = &material->text.main_screen.get_hour();
	draw_hours_from_x = hour->getPosition().x;
	draw_hours_from_y = hour->getPosition().y;
	hour_bar_heigth = material->shape.get_row_bar_heigth();
	hour_number = 8;
}

void hours::draw()
{
	get_first_hour_y_position();
	draw_moving_hour();
	set_hour_to_first_hour_y_position();
}

void hours::draw_moving_hour()
{
	get_temp();
	for (int i = 0; i <= material->time.get_third_of_day_have_hours() + 2; i++) {
			hour->setPosition(draw_hours_from_x, first_hour_y_position + i * hour_bar_heigth);
			hour->setString(get_hours_numbers());
			window->draw(*hour);
	}
	set_temp();
}

void hours::get_first_hour_y_position()
{
	first_hour_y_position = hour->getPosition().y;
}

void hours::set_hour_to_first_hour_y_position()
{
	hour->setPosition(draw_hours_from_x, first_hour_y_position);
}

void hours::get_temp()
{
	temp_hour_number = hour_number;
}

void hours::set_temp()
{

}


std::string hours::get_hours_numbers(){
	temp_hour_number++;
	if(temp_hour_number<10) return "0" + std::to_string(temp_hour_number) + ":00";
	else return std::to_string(temp_hour_number) + ":00";
}