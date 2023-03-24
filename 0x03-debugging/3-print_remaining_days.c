#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int leap_year_num_of_days = 366;
	int normal_year_num_of_days = 365;

	/* note that if a year is devisable by 4 then it's a leap year */
	if (year % 4 == 0)
	{
		if (month >= 3)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_year_num_of_days - day);
		return;
	}

	if ((year % 4 != 0 && day == 60)
		|| (month >= 1 && month <= 12)
		|| (day >= 1 && day <= 31)
	)
	{
		printf("Invalid date: %02d/%02d/%04d\n", day, month, year);
		return;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", normal_year_num_of_days - day);
}
