#include "text_day.h"


void text_day::load_materials()
{
	column_x_position = shape->get_column().getPosition().x;
	column_y_position = shape->get_column().getPosition().y;
	column_bar_length = shape->get_column_bar_length();
	row_bar_heigth = shape->get_row_bar_heigth();
}

void text_day::load_text()
{
	day_parameters_values();
	set_parameters_to_day();
}



void text_day::day_parameters_values()
{
	size = 35;
	pos_x= column_x_position + (column_bar_length / 2);
	pos_y = column_y_position - (row_bar_heigth / 10);
	ch_color = color->get_black();
	text_string = "00";
}

void text_day::set_parameters_to_day()
{
	text.setFont(*Arial);
	text.setPosition(pos_x, pos_y);
	text.setCharacterSize(size);
	text.setFillColor(ch_color);
	text.setStyle(sf::Text::Regular);
	text.setString(text_string);
	set_text_origin();
}

void text_day::set_text_origin()
{
	text_origin_x = text.getLocalBounds().left + text.getLocalBounds().width / 2;
	text_origin_y = text.getLocalBounds().top + text.getLocalBounds().height / 2;
	text.setOrigin(text_origin_x, text_origin_y);
}
