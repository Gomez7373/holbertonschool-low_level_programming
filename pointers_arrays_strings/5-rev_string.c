#include "main.h"
#include <stdio.h>
#include <string.h> 

void rev_string(char *s)
{
int c;
int g;

g = strlen(s);

	for (c = g -1; c >= 0; c--)
	{
		putchar(s[c]);
	}
putchar('\n');
}
/**
 *
#include <stdio.h>
#include "main.h"
#include <string.h>

 comment area below
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed
 
 _______________________________
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
_______________________________
 */

