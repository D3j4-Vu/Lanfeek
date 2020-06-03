#pragma once
#include <string>

#include <SFML/Graphics.hpp>


#include "shapes/shapes.h"
#include "screen_parameters/screen_parameters.h"
#include "colors/colors.h"
#include "times/times.h"
#include "texts/texts.h"

class materials: shapes, colors, screen_parameters, times, texts
{


public:
	void load_materials();

	times time;
	screen_parameters screen_parameter;
	colors color;
	shapes shape;
	texts text;
};

