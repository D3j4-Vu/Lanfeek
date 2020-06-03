#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "../../materials/materials.h"


#include "columns/columns.h"
#include "rows/rows.h"
#include "days/days.h"
#include "hours/hours.h"

class main_screen: columns, rows, days, hours
{
private:
	columns column;
	rows row;
	days day;
	hours hour;
public:
	materials *material;
	sf::RenderWindow* window;
	void load_materials();

	void draw();


};

