#include "main.h"

/**
 * print_triangle - prints a right triangle, followed by a new line.
 *
 * @size: the size of the triangle vertically
 *
 * Return: always void
*/
void print_triangle(int size)
{
	int num_of_hashes = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (num_of_hashes <= size)
	{
		int j;
		int x;
		int num_of_spaces = size - num_of_hashes;

		for (j = 0; j < num_of_spaces; j++)
		{
			_putchar(' ');
		}

		for (x = 0; x < num_of_hashes; x++)
		{
			_putchar('#');
		}

		_putchar('\n');

		num_of_hashes++;
	}
}
