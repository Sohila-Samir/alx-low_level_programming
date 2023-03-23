#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: he number of times the character \ should be printed diagonally.
 *
 * Return: always void
*/
void print_diagonal(int n)
{
	int current_line_index = n;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (current_line_index >= 1)
	{
		int i;
		int num_of_spaces = n - current_line_index;

		for (i = 0; i < num_of_spaces; i++)
		{
			_putchar(' ');
		}

		_putchar('\\');

		_putchar('\n');

		current_line_index--;
	}
}
