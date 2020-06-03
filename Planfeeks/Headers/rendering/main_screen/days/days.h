#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <string>

#include "../../../materials/materials.h"

class days {
private:
	sf::Text *day;

	int day_number;
	int week_have_days;
	int year_have_months;
	int now_month;
	int* months;

	int column_bar_length;
	int column_pos_x;


	int temp_now_month;
	int temp_day_number;
	int temp_day_x_position;

	void get_day_number();
	std::string temp_string;
	void get_temp();
	void set_temp();

	int draw_days_from_x;
	int draw_days_from_y;

	void fix_day_number();
	int sf_string_to_int(sf::String string);

	void month_pp();
	void month_mm();

	std::string days_numbers();
	

public:
	sf::RenderWindow* window;
	materials* material;
	void load_materials();


	void draw();
};