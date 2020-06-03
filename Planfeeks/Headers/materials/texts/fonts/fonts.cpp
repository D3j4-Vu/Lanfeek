#include "fonts.h"

void fonts::load_fonts()
{
	Arial.loadFromFile("arial.ttf");
}

sf::Font& fonts::get_Arial()
{
	return Arial;
}
