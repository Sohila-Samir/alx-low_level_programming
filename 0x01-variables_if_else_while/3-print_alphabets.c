#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints alphabets in lower and uppercase
 * through using two loops that loops through two array of characters
 * that holds the characters in lower and uppercase.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	int i;
	char alphabet_lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet_lower[i]);
	}

	i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet_upper[i]);
	}

	putchar('\n');

	return (0);
}
