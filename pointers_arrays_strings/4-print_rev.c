#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
int i;
int length;

length = strlen(s);

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');

}

