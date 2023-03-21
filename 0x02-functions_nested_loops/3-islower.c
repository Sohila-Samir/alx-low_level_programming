#include "main.h"

/**
 * _islower - a function that checks if @c is lowers case
 *
 * @c: is a charchter
 *
 * Return: return 1 if @c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
