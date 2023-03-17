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

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
