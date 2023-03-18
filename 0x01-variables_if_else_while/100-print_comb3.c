#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all possible
 * different combinations of two digits.
 *
 * Return: always 0 - success
 */
int main(void)
{
	int i, j;
	int limit = 10;

	for (i = 0; i < (limit - 1); i++)
	{
		for (j = (i + 1); j < limit; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

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
