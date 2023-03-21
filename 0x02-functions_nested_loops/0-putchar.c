#include "main.h"
#include <string.h>

/**
 * main - entry point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	print_string_msg();
	return (0);
}

/**
 * print_string_msg - prints a message
 *
 * Description: a function that prints _putchar, followed by a new line.
 *
 * Return: void
*/
void print_string_msg(void)
{
	int i;
	char msg[] = "_putchar";

	for (i = 0; i < (int) strlen(msg); i++)
	{
		_putchar(msg[i]);
	}

	_putchar('\n');
}
