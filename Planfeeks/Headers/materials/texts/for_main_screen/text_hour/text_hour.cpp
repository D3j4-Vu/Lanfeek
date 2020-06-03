#include "text_hour.h"


void text_hour::load_materials()
{
	row_x_position = shape->get_row().getPosition().x;
	row_y_position = shape->get_row().getPosition().y;

}

void text_hour::load_text()
{
	hour_parameters_values();
	set_parameters_to_hour();
}



void text_hour::hour_parameters_values()
{
	size = 20;
	pos_x= row_x_position / 2;
	pos_y = row_y_position;
	ch_color = color->get_black(); //
	text_string = "01:00";
}

void text_hour::set_parameters_to_hour()
{
	text.setFont(*Arial);
	text.setPosition(pos_x, pos_y);
	text.setCharacterSize(size);
	text.setFillColor(ch_color);
	text.setStyle(sf::Text::Regular);
	text.setString(text_string);
	set_text_origin();
}

void text_hour::set_text_origin()
{
	text_origin_x = text.getLocalBounds().left + text.getLocalBounds().width / 2;
	text_origin_y = text.getLocalBounds().top + text.getLocalBounds().height / 2;
	text.setOrigin(text_origin_x, text_origin_y);
}
