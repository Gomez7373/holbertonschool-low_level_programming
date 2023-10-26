#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = 0;

    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--) {
        _puts(s[i]);
    }

    // Print a new line
    _puts('\n');
}

