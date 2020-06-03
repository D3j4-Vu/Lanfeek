#include "events.h"




void events::load_materials()
{
	do_task.material = material;
	do_task.window = window;
	do_task.load_elements();

	event_mouse.do_task = &do_task;
	event_mouse.mouse_event = &app_event;
	event_mouse.load_materials();

	event_window.do_task = &do_task;
	event_window.window_event = &app_event;
}

void events::detect_event()
{
	while (window->pollEvent(app_event)) {
		event_mouse.detect_mouse_events();
		event_window.detect_window_events();
	}
}