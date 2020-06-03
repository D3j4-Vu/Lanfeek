#pragma once
#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>

#include "../../do_tasks/do_tasks.h"

class left_button
{
private:
	int mouse_press_x_position = 0;
	int mouse_press_y_position = 0;
	bool left_mouse_button_is_on_press = false;

	void get_left_mouse_buton_condition();
	void mouse_left_pressed();
	void get_mouse_press_position();
	void mouse_left_released();
	void get_first_mouse_movement_direction();
	void do_swipe_screen();
	void do_stop_swipe_screen();

	bool mouse_moved_while_pressed = false;
	bool vertical_mouse_movement_first = false;
public:
	do_tasks *do_task;
	sf::Event *button_event;
	void load_elements();

	void clicked();
};