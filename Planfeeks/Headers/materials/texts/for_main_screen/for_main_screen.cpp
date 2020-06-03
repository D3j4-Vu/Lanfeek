#include "for_main_screen.h"


void for_main_screen::load_materials()
{
	day.Arial = Arial;
	day.shape = shape;
	day.color = color;
	day.load_materials();
	day.load_text();

	hour.Arial = Arial;
	hour.shape = shape;
	hour.color = color;
	hour.load_materials();
	hour.load_text();
}

sf::Text& for_main_screen::get_day()
{
	return day.text;
}

sf::Text& for_main_screen::get_hour()
{
	return hour.text;
}
