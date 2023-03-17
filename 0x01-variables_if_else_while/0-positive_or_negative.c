#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: main function creates a pseudo-random generator
 * first.
 * calls the rand() function to get a random number.
 * stores it in the n variable.
 * the n variables goes through an output control statments
 * and prints weather it is a negative, positive or a zero number.
 *
 * Return: always 0 (success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
