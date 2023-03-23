#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: the charachter to check wheather it's an uppercase or not
 *
 * Return: 1 if @c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	int ascii_uppercase_start = 65;
	int ascii_uppercase_end = 90;

	if (c >= ascii_uppercase_start && c <= ascii_uppercase_end)
	{
		return (1);
	}

	return (0);
}
