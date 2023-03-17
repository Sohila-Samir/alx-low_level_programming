#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * display_msg - prints a dynamic message.
 * @number: is the number to get the last digit from.
 * @last_digit: the last digit of the @number.
 * @additional_msg: an additional message given dynamically that depends on
 * the nature of the @last_digit.
 *
 * Description: a function that prints out a message of the last digit
 * of the given number with an additional part given by the program.
 *
 * Return: nothing
 */
void display_msg(int number, int last_digit, char *additional_msg)
{
	printf("Last digit of %d is %d %s\n", number, last_digit, additional_msg);
}

/**
 * main - entry point
 *
 * Description: a program that prints the last digit of random
 * negative or positive or a zero number.
 * with a display message that depends on the last cases.
 *
 * Return: always 0 (success)
 **/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		display_msg(n, last_digit, "and is greater than 5");
	} else if (last_digit == 0)
	{
		display_msg(n, last_digit, "and is 0");
	} else if (last_digit < 6)
	{
		display_msg(n, last_digit, "and is less than 6 and not 0");
	}

	return (0);
}
