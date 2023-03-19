#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all possible
 * different combinations of three digits.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j, x;
	int limit = 10;

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			for (x = 0; x < limit; x++)
			{
				if (j > i && x > j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + x);
				} else
				{
					continue;
				}

				if (i != limit - 3)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
