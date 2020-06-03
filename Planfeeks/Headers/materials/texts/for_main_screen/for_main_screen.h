#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../colors/colors.h"
#include "../../shapes/shapes.h"

#include "text_day/text_day.h"
#include "text_hour/text_hour.h"

class for_main_screen: text_day, text_hour
{
private:
	text_day day;
	text_hour hour;


public:
	sf::Font *Arial;
	shapes* shape;
	colors* color;
	void load_materials();

	sf::Text& get_day();
	sf::Text& get_hour();
};
