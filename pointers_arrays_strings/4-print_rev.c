#include <stdio.h>
#include "main.h"

/*
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *)
{
    if (s == NULL)
        return;

    char length; 

    
    length = 0;
    while (s[length] != '\0')
        length++;

    
    char i;
    for (i = length - 1; i >= 0; i--)
        printf(s[i]);

    printf('\n');
}

