#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;
	int year_day;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	year_day = convert_day(month, day);

	if (year_day == day && month != 1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		print_remaining_days(month, year_day, year);
	}


	return (0);
}
