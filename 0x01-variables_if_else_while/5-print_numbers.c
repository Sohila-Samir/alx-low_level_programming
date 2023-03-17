#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
