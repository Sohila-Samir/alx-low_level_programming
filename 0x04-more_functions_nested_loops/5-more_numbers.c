#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
*/
void more_numbers(void)
{
	int i = 0;
	int lines_limit = 10;

	while (i < lines_limit)
	{
		int j;
		int numbers_limit = 14;

		for (j = 0; j <= numbers_limit; j++)
		{
			int less_than_10_num = j;

			if (j > 9)
			{
				_putchar('1');
				less_than_10_num = j % 10;
			}

			_putchar(less_than_10_num + '0');
		}

		_putchar('\n');

		i++;
	}
}
