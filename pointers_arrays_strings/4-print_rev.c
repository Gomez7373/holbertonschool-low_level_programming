#include <stdio.h>
#include "main.h"

/*
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i;
	int length;
	s = 0; 
	length =0;

    if (s == NULL)
        return;

    while (s[length] != '\0')
        length++;

    for (i = length - 1; i >= 0; i--)
        putchar(s[i]);

    putchar('\n');
   
}

