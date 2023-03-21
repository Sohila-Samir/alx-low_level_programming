#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: is the number that needs to be checked.
 *
 * Return: reutnr + sign if number is positive
 * and - sign if number is negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
