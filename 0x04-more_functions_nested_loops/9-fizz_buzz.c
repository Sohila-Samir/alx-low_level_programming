#include <stdio.h>

/**
 * main - entry point
 *
 * Description: fizzbuzz game to print numbers from 0 to
 * 100.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i;
	int max = 100;

	for (i = 1; i <= max; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != max)
		{
			printf("%c", ' ');
		}
	}

	printf("%c", '\n');

	return (0);
}
