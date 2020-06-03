#pragma once
#include <SFML/Graphics.hpp>

#include "../colors/colors.h"
#include "../shapes/shapes.h"

#include "for_main_screen/for_main_screen.h"
#include "fonts/fonts.h"

class texts: fonts, for_main_screen
{
private:
	fonts font;
public:
	shapes *shape;
	colors *color;
	void load_materials();


	for_main_screen main_screen;
};
