#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
