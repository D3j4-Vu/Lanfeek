#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../materials/materials.h"

#include "do_tasks/do_tasks.h"
#include "window/window.h"
#include "mouse/mouse.h"

#include "../materials/materials.h"


class events: do_tasks, windows, mouse
{
private:
	sf::Event app_event;

	do_tasks do_task;
	windows event_window;
	mouse event_mouse;

public:
	materials *material;
	sf::RenderWindow *window;
	void load_materials();

	void detect_event();
};