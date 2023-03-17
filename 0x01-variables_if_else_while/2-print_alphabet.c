#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Descriptopn: a program that loops through
 * an array of alphabet characters and prints them to the standard output.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char alphabets[30] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < (int) strlen(alphabets); i++)
	{
		putchar(alphabets[i]);
	}
	return (0);
}
