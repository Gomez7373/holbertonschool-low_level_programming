#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every second character of a string.
 * @str: The input string.
 */
void puts2(char *str)
{
	int g;
	int c;
	char *s = str;

	for (c = 0 ; *str != '\0'; c++)
	{
		str++;
		
	}

	for (g = 0; g < c; g =+ 2)
	
	{
		putchar(s[g]);
	}
/**

	if (g == "\0Holberton")
	
		break;
		
*/

	putchar('\n');
}
