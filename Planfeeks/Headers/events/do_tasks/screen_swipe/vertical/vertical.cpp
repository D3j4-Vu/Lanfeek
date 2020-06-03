#include "vertical.h"

void vertical::load_elements()
{
	rows.window = window;
	rows.material = material;
	rows.load_elements();
}

void vertical::load_mouse_press_y_position(int* get_mouse_press_y_position)
{
	rows.mouse_press_y_position = get_mouse_press_y_position;
}




void vertical::swipe()
{
	rows.swipe();
}

void vertical::stop_swipe()
{
	rows.stop_swipe();
}
