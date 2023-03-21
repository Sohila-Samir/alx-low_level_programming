#include <stdbool.h>

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: a charachter to check.
 *
 * Description: checks for alphabetic character. wheather
 * it's a lowercase, uppercase, a letter or none of them all.
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise returns 0
*/
int _isalpha(int c)
{
	/*
	- 65: start of the ASCII codes for lowercase charachters.
	- 90: end of the ASCII codes for lowercase charachters.
	- 97: start of the ASCII codes for uppercase charachters.
	- 122: end of the ASCII codes for uppercase charachters.
	*/
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
