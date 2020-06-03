#include "texts.h"

void texts::load_materials()
{
	font.load_fonts();

	main_screen.shape = shape;
	main_screen.color = color;
	main_screen.Arial = &font.get_Arial();
	main_screen.load_materials();

}
