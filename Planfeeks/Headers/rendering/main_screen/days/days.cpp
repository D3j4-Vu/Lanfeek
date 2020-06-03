#include "days.h"



void days::load_materials()
{
	day = &material->text.main_screen.get_day();
	draw_days_from_y = day->getPosition().y;
	year_have_months = material->time.get_year_have_months();
	week_have_days = material->time.get_week_have_days();
	column_bar_length = material->shape.get_column_bar_length();
	column_pos_x = material->shape.get_column().getPosition().x;
	months = material->time.months;
	day_number = material->time.timeinfo->tm_mday;
	day->setString(std::to_string(material->time.timeinfo->tm_mday));
	now_month = material->time.timeinfo->tm_mon;
}

void days::draw()
{
	get_day_number();
	get_temp();
	for (int i = 0; i <= week_have_days + 1; i++) {
			day->setPosition(temp_day_x_position + i * column_bar_length, draw_days_from_y);
			day->setString(days_numbers());
			window->draw(*day);
	}
	set_temp();
}


void days::get_day_number()
{
	day_number = sf_string_to_int(day->getString());
	fix_day_number();
}

void days::get_temp()
{
	temp_day_x_position = day->getPosition().x;
	
	temp_day_number = day_number;
	
	temp_now_month = now_month;
}

void days::set_temp()
{
	day->setPosition(temp_day_x_position, draw_days_from_y);
	
	day->setString(std::to_string(day_number));
	
	now_month = temp_now_month;
}

std::string days::days_numbers()
{
	if (temp_day_number <= months[now_month]) return std::to_string(temp_day_number++);
	else {
		temp_day_number = 1;
		month_pp();                                                     
		return std::to_string(temp_day_number++);
	}
}



void days::fix_day_number()
{
	if (day_number > months[now_month]) {
		month_pp();
		day_number = 1;
	}
	else if (day_number == 0) {
		month_mm();
		day_number = months[now_month];
	}
}

int days::sf_string_to_int(sf::String sf_string)
{
	temp_string = sf_string;
	return std::stoi(temp_string);
}

void days::month_pp()
{
	if (now_month < year_have_months - 1) now_month++;
	else now_month = 0;
}

void days::month_mm()
{
	if (now_month > 0) now_month--;
	else now_month = 11;
}
