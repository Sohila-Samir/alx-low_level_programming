#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25 ; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}


	putchar('\n');

	return (0);
}
