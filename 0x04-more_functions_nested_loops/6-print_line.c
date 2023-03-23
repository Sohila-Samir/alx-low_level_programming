#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n:  is the number of times the character _ should be printed
 * (the length of the line horizontally).
 *
 * Return: always void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		_putchar('_');

		i++;
	}

	_putchar('\n');
}
