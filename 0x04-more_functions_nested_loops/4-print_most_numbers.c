#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: always void
*/
void print_most_numbers(void)
{
	int i = 0;
	int limit = 9;

	while (i <= limit)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}

		i++;
	}

	_putchar('\n');
}
