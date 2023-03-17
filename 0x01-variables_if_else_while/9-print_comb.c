#include <stdio.h>

/**
 * main - entry point
 *
 * Description:
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int maximum = 10;

	for (i = 0; i < maximum; i++)
	{
		putchar('0' + i);

		if (i != maximum - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
