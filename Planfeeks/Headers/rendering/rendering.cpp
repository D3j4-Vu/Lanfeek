#include "rendering.h"



void rendering::load_materials()
{
	main_screen.material = material;
	main_screen.window = window;
	main_screen.load_materials();
}

void rendering::main_window()
{
	window->clear(material->color.get_paper());

	main_screen.draw();

	window->display();
}

