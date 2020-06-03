#include "do_tasks.h"


void do_tasks::load_elements()
{
	do_screen_swipe.window = window;
	do_screen_swipe.material = material;
	do_screen_swipe.load_elements();

	do_shut_down.window = window;
}



