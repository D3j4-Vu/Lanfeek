#include "planfeeks_main.h"

#include <iostream>


void planfeeks_main::start_planfeek()
{
	load_materials();
	create_window();
	planfeek();
}

void planfeeks_main::planfeek() {
	while (window.isOpen()) {
		event.detect_event();
		render.main_window();
	}
}

void planfeeks_main::create_window() {
	window.create(app_resolution(), app_name);
	window.setFramerateLimit(60);
}



void planfeeks_main::load_materials()
{
	material.load_materials();

	screen_heigth = &material.screen_parameter.get_screen_heigth();
	screen_length = &material.screen_parameter.get_screen_length();

	event.material = &material;
	event.window = &window;
	event.load_materials();
	
	render.material = &material;
	render.window = &window;
	render.load_materials();
}

sf::VideoMode planfeeks_main::app_resolution()
{
	return sf::VideoMode(*screen_length, *screen_heigth);
}
