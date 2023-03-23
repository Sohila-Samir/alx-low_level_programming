#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: a single digit that ranges from 0 to 9 to
 * check wheather it's a digit or not.
 *
 * Return: 1 if @c is digit and 0 otherwise
*/
int _isdigit(int c)
{
	int ascii_digits_start = 48;
	int ascii_digits_end = 57;

	if (c >= ascii_digits_start && c <= ascii_digits_end)
	{
		return (1);
	}

	return (0);
}
