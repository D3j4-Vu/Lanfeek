#include "rows.h"




void rows::load_materials()
{
	screen_heigth = &material->screen_parameter.get_screen_heigth();
	row = &material->shape.get_row();
	draw_rows_from_x = row->getPosition().x;
	draw_rows_from_y = row->getPosition().y;
	row_bar_heigth = material->shape.get_row_bar_heigth();
}

void rows::draw()
{
	get_first_row_y_position();
	draw_standing_row();
	draw_moving_row();
	set_row_to_first_row_y_position();
}

void rows::draw_standing_row()
{
	row->setPosition(standing_row_x_position, draw_rows_from_y);
	window->draw(*row);
}

void rows::draw_moving_row()
{
	for (int i = 0; i <= material->time.get_third_of_day_have_hours() + 2; i++) {
		if (rows_behind_standing_row(i)){
			row->setPosition(draw_rows_from_x, first_row_y_position + i * row_bar_heigth);
			window->draw(*row);
		}
	}
}

bool rows::rows_behind_standing_row(int i)
{
	return first_row_y_position + i * row_bar_heigth > draw_rows_from_y;
}

void rows::get_first_row_y_position()
{
	first_row_y_position = row->getPosition().y;
}

void rows::set_row_to_first_row_y_position()
{
	row->setPosition(draw_rows_from_x, first_row_y_position);
}


