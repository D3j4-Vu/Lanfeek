#include "materials.h"

void materials::load_materials()
{
	color.load_colors();
	
	screen_parameter.get_parameters();

	
	shape.color = &color;
	shape.time = &time;
	shape.screen_parameter = &screen_parameter;
	shape.load_materials();

	text.color = &color;
	text.shape = &shape;
	text.load_materials();

	time.load_time();


}
