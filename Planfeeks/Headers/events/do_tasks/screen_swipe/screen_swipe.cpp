#include "screen_swipe.h"

void screen_swipe::load_elements()
{
	horizontal.window = window;
	horizontal.material = material;
	horizontal.load_elements();

	vertical.window = window;
	vertical.material = material;
	vertical.load_elements();
}

void screen_swipe::swipe() {
	if(*vertical_mouse_movement_first)
		vertical.swipe();
	else
		horizontal.swipe();
}

void screen_swipe::stop_swipe() {
	if (*vertical_mouse_movement_first)
		vertical.stop_swipe();
	else
		horizontal.stop_swipe();
}