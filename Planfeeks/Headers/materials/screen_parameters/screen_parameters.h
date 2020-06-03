#pragma once
#include <string>

#include <SFML/Graphics.hpp>

class screen_parameters
{
private:
	int screen_length;
	int screen_heigth;

public:
	void get_parameters();


	int &get_screen_length();
	int &get_screen_heigth();

};
