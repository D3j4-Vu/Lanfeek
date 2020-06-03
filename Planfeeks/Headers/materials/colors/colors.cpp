#include "colors.h"

void colors::load_colors() {
	black= sf::Color(0, 0, 0);;
	warm_grey = sf::Color(185, 185, 177);
	warm_black = sf::Color(115, 115, 107);;
	paper = sf::Color(255, 255, 247);


}


sf::Color colors::get_black()
{
	return black;
}

sf::Color colors::get_warm_grey()
{
	return warm_grey;
}

sf::Color colors::get_warm_black()
{
	return warm_black;
}

sf::Color colors::get_paper()
{
	return paper;
}
