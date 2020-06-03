#include "columns.h"



void columns::load_materials()
{
	screen_length = &material->screen_parameter.get_screen_length();
	column = &material->shape.get_column();
	draw_columns_from_x = column->getPosition().x;
	draw_columns_from_y = column->getPosition().y;
	column_bar_length = material->shape.get_column_bar_length();
	
}


void columns::draw()
{
	get_first_column_x_position();
	draw_standing_column();
	draw_moving_columns();
	set_column_to_first_column_x_position();
}









void columns::draw_standing_column()
{
	column->setPosition(draw_columns_from_x, draw_columns_from_y);
	window->draw(*column);
}

void columns::draw_moving_columns()
{
	for (int i = 0; i <= material->time.get_week_have_days() + 2; i++) {
		if (columns_behind_standing_column(i)) {
			column->setPosition(first_column_x_position + i * column_bar_length, draw_columns_from_y);
			window->draw(*column);
		}
	}
}








bool columns::columns_behind_standing_column(int i)
{
	return first_column_x_position + i * column_bar_length > draw_columns_from_x;
}

void columns::get_first_column_x_position()
{
	first_column_x_position = column->getPosition().x;
}

void columns::set_column_to_first_column_x_position()
{
	column->setPosition(first_column_x_position, draw_columns_from_y);
}
