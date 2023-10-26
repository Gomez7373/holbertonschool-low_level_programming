/* 4-print_rev.c */

#include <stdio.h>
#include "main.h"

/*
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = 0; // Declare the variable at the beginning

    /* Calculate the length of the string */
    while (s[length] != '\0') {
        length++;
    }

    int i; // Move the declaration here

    /* Print the string in reverse */
    for (i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }

    /* Print a new line */
    putchar('\n');
}
