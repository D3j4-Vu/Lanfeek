#include "horizontal.h"



void horizontal::load_elements()
{
	columns.window = window;
	columns.material = material;
	columns.load_elements();

	days.window = window;
	days.material = material;
	days.load_elements();
}

void horizontal::load_mouse_press_x_position(int *get_mouse_press_x_position)
{
	columns.mouse_press_x_position = get_mouse_press_x_position;
	
	days.mouse_press_x_position = get_mouse_press_x_position;
}



void horizontal::swipe()
{
	columns.swipe();
	days.swipe();
}

void horizontal::stop_swipe()
{
	columns.stop_swipe();
	days.stop_swipe();
}
