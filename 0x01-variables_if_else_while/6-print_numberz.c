#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * without using printf function or etc.
 * any with only putchar function allowed and to be used only twice.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
