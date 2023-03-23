#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: always void
*/
void print_numbers(void)
{
	int i = 0;
	int limit = 9;

	while (i <= limit)
	{
		_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}
