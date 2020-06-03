#include "shapes.h"

void shapes::load_materials() {
	column.color = color;
	column.time = time;
	column.screen_parameter = screen_parameter;
	column.load_materials();
	column.create_column();
	

	row.color = color;
	row.time = time;
	row.screen_parameter = screen_parameter;
	row.load_materials();
	row.create_row();
}

int shapes::get_row_bar_heigth()
{
	return row.bar_heigth;
}

int shapes::get_column_bar_length()
{
	return column.bar_length;
}
