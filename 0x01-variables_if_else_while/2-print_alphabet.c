#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet characters in lowercase
 * through using a loop that loops through an array of characters
 * that holds the characters in lowercase.
 *
 * Return: always 0 (success).
 */
int main(void)
{
        int i;
        char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

        for (i = 0; i < 26; i++)
        {
                putchar(alphabet[i]);
        }

        putchar('\n');

        return (0);
}
