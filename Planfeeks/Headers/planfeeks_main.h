#pragma once
#include <iomanip>
#include <string>

#include "../Headers/materials/materials.h"
#include "../Headers/rendering/rendering.h"
#include "../Headers/events/events.h"
#include <SFML/Graphics.hpp>



class planfeeks_main : materials, rendering, events
{
private:
	sf::RenderWindow window;
	materials material;

	rendering render;
	events event;

	int* screen_heigth;
	int* screen_length;

	sf::VideoMode app_resolution();
	std::string app_name="Planfeeks";
public:
	void load_materials();
	
	void start_planfeek();
	void create_window();
	
	void planfeek();
public:
};


