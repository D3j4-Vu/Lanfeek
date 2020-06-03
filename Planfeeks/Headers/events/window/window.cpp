#include "window.h"





void windows::detect_window_events()
{
	event_close_button_pressed();
}

void windows::event_close_button_pressed()
{
	if (window_event->type == sf::Event::EventType::Closed)
		start_close_app();
}

void windows::start_close_app()
{
	do_task->do_shut_down.close_app();
}




