#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a new line
*/
void print_alphabet_x10(void)
{
	int i = 0;


	while (i < 10)
	{
		int lower_start = 97;
		int lower_end = 122;

		for (; lower_start <= lower_end; lower_start++)
		{
			_putchar(lower_start);
		}

		_putchar('\n');

		i++;
	}
}
