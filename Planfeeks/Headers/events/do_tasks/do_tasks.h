#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../materials/materials.h"

#include "screen_swipe/screen_swipe.h"
#include "shut_down_app/shut_down_app.h"

class do_tasks: screen_swipe, shut_down_app
{
private:


public:
	materials *material;
	sf::RenderWindow* window;
	void load_elements();
	
	screen_swipe do_screen_swipe;
	shut_down_app do_shut_down;

};