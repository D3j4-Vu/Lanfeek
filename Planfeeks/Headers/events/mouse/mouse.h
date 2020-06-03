#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

#include "../do_tasks/do_tasks.h"

#include "left_button/left_button.h"



class mouse: left_button
{
private:
	left_button left_button;

	void event_left_mouse_button_click();
public:
	do_tasks *do_task;
	sf::Event *mouse_event;
	void load_materials();

	void detect_mouse_events();
			
};