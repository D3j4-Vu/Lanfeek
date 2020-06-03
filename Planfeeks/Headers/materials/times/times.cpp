#include "times.h"


void times::load_time()
{
	refresh_time();
	load_months();
}

void times::refresh_time() {
	time(&rawseconds);
	timeinfo = localtime(&rawseconds);
	timeinfo->tm_year += raw_from_year;
}

void times::load_months()
{
	months[0] = 31;
	months[1] = leaping_month(timeinfo->tm_year);
	months[2] = 31;
	months[3] = 30;
	months[4] = 31;
	months[5] = 30;
	months[6] = 31;
	months[7] = 31;
	months[8] = 30;
	months[9] = 31;
	months[10] = 30;
	months[11] = 31;
}

int times::leaping_month(int year)
{
	if ((year % 4) != 0) return 28;
	else if ((year % 100) != 0) return  29;
	else if ((year % 400) != 0) return 28;
	else return 29;
}

int times::get_year_have_months()
{
	return year_have_months;
}

int times::get_days_have_hours()
{
	return day_have_hours;
}

int times::get_third_of_day_have_hours()
{
	return third_of_day_have_hours;
}

int times::get_week_have_days()
{
	return week_have_days;
}

