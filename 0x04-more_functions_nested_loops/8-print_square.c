#include "main.h"

/**
 * print_square - prints a squre of size @size
 *
 * @size: size of the square
 *
 * Return: always void
*/
void print_square(int size)
{
	int current_square_line = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (current_square_line <= size)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}

		_putchar('\n');

		current_square_line++;
	}
}
