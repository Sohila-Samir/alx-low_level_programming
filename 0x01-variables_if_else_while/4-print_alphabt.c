#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet characters except q and e
 * characters.
 * Return: always 0 (success).
 */
int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');

	return (0);
}
