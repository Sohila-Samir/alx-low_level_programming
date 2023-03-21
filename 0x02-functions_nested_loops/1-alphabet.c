#include "main.h"

void print_alphabet(void);

/**
 * main - entry point
 *
 * Description: a program that prints the alphabet, in lowercase,
 * followed by a new line..
 *
 * Return: always 0 (success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void) {
    int lower_start = 97;
    int lower_end = 122;

    for (; lower_start <= lower_end; lower_start++)
    {
        putchar(lower_start);
    }

    putchar('\n');
    return;
}