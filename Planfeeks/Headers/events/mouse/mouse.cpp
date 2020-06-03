#include "mouse.h"


void mouse::load_materials()
{
	left_button.button_event = mouse_event;
	left_button.do_task = do_task;
	left_button.load_elements();
}

void mouse::detect_mouse_events()
{
	event_left_mouse_button_click();
}

void mouse::event_left_mouse_button_click()
{
	left_button.clicked();
}

















