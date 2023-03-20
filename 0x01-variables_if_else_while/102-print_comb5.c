#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;
	int limit = 100;

	for (i = 0; i < limit; i++)
	{
		for (j = i + 1; j < limit; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != limit - 2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
