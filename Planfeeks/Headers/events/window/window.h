#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

#include "../../materials/materials.h"
#include "../do_tasks/do_tasks.h"

class windows
{
private:
public:
	do_tasks *do_task;
	sf::Event *window_event;

	void detect_window_events();
		void event_close_button_pressed();
			void start_close_app();

};