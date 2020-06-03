#include "main_screen.h"



void main_screen::load_materials()
{
	row.material = material;
	row.window = window;
	row.load_materials();

	column.material = material;
	column.window = window;
	column.load_materials();

	day.material = material;
	day.window = window;
	day.load_materials();

	hour.material = material;
	hour.window = window;
	hour.load_materials();
}

void main_screen::draw()
{
	column.draw();
	row.draw();
	day.draw();
	hour.draw();
}
 
