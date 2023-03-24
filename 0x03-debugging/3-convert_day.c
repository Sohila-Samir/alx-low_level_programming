#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
	int jan = 31;
	int feb = 28 + jan;
	int mar = 31 + feb;
	int abr = 30 + mar;
	int may = 31 + abr;
	int jun = 30 + may;
	int jul = 31 + jun;
	int aug = 31 + jul;
	int sep = 30 + aug;
	int oct = 31 + sep;
	int nov = 30 + oct;

	int months[11];

	months[0] = jan;
	months[1] = feb;
	months[2] = mar;
	months[3] = abr;
	months[4] = may;
	months[5] = jun;
	months[6] = jul;
	months[7] = aug;
	months[8] = sep;
	months[9] = oct;
	months[10] = nov;

	day = month == 1 ? day : months[month - 2] + day;

	return (day);
}
