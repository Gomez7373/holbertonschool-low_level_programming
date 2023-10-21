#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(void)
{
    char ch;

    printf("Check all uppercase characters (from 'A' to 'Z')\n");
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        if (_isupper(ch))
            printf("Uppercase character: %c\n", ch);
    }

    printf("\nCheck all characters except uppercase characters (From 32 to 126 in the ASCII table)\n");
    for (ch = 32; ch <= 126; ch++)
    {
        if (!_isupper(ch))
            printf("Not an uppercase character: %c\n", ch);
    }

    return (0);
}

