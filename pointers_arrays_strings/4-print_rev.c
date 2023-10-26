#include <stdio.h>
#include "main.h"

/*
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int s;
	int length;
	s = 0; 
	length =0;

    if (s == NULL)
        return;

    int length = 0;

    while (s[length] != '\0')
        length++;

    int i;
    for (i = length - 1; i >= 0; i--)
        putchar(s[i]);

    putchar('\n');
    return (0);
}
