#include "screen_parameters.h"


void screen_parameters::get_parameters()
{
	screen_length = 1080;
	screen_heigth = 720;
}

int &screen_parameters::get_screen_heigth()
{
	return screen_heigth;
}

int &screen_parameters::get_screen_length()
{
	return screen_length;
}


