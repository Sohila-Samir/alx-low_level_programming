#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
*/
void print_alphabet(void)
{
	int lower_start = 97;
	int lower_end = 122;

	for (; lower_start <= lower_end; lower_start++)
	{
		_putchar(lower_start);
	}

	_putchar('\n');
}
