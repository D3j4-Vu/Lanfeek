#include "left_button.h"


void left_button::load_elements()
{
	do_task->do_screen_swipe.vertical_mouse_movement_first = &vertical_mouse_movement_first;
	do_task->do_screen_swipe.horizontal.load_mouse_press_x_position(&mouse_press_x_position);
	do_task->do_screen_swipe.vertical.load_mouse_press_y_position(&mouse_press_y_position);
}

void left_button::clicked()
{
	get_left_mouse_buton_condition();
	get_first_mouse_movement_direction();
	if (left_mouse_button_is_on_press == true)
		do_swipe_screen();
	else do_stop_swipe_screen();
}

void left_button::get_left_mouse_buton_condition()
{
	mouse_left_pressed();
	mouse_left_released();
}

void left_button::mouse_left_pressed()
{
	if (button_event->type == sf::Event::MouseButtonPressed) {
		get_mouse_press_position();
		left_mouse_button_is_on_press = true;
		mouse_moved_while_pressed = false;
	}
}

void left_button::get_mouse_press_position()
{
	mouse_press_x_position = sf::Mouse::getPosition().x;
	mouse_press_y_position = sf::Mouse::getPosition().y;
}

void left_button::mouse_left_released()
{
	if (button_event->type == sf::Event::MouseButtonReleased) {
		left_mouse_button_is_on_press = false;
	}
}

void left_button::get_first_mouse_movement_direction() {
	if (!mouse_moved_while_pressed) {
		if (abs(mouse_press_x_position - sf::Mouse::getPosition().x) > abs(mouse_press_y_position - sf::Mouse::getPosition().y)) {
			vertical_mouse_movement_first = false;
			mouse_moved_while_pressed = true;
		}
		if (abs(mouse_press_x_position - sf::Mouse::getPosition().x) < abs(mouse_press_y_position - sf::Mouse::getPosition().y)) {
			vertical_mouse_movement_first = true;
			mouse_moved_while_pressed = true;
		}

	}
}

void left_button::do_swipe_screen()
{
	do_task->do_screen_swipe.swipe();
	}

void left_button::do_stop_swipe_screen()
{
	do_task->do_screen_swipe.stop_swipe();
}
