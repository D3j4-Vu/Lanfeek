#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include <ctime>
#include <SFML/Graphics.hpp>

	const int raw_from_year = 1900;
	const int year_have_months = 12;
	const int week_have_days = 7;
	const int day_have_hours = 24;
	const int third_of_day_have_hours = day_have_hours / 3;

class times
{
private:
	time_t rawseconds;
	
	void load_months();
	int leaping_month(int year);
public:
	
	void load_time();





	void refresh_time();
	
	struct tm* timeinfo;


	int get_year_have_months();
	int get_week_have_days();
	int get_days_have_hours();
	int get_third_of_day_have_hours();

	int months[year_have_months];
};