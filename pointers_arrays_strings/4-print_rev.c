#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    int i;

    /* Calculate the length of the string */
    while (s[length] != '\0') {
        length++;
    }

    /* Print the string in reverse */
    for (i = length - 1; i >= 0; i--) {
        _putchar(s[i]);
    }

    /* Print a new line */
    _putchar('\n');
}

