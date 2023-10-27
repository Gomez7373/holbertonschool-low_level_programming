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

	while (str != '\0')
	{
		str++;
		c++;
	}

	for (g = 0; g < c; g =+ 2)
	
	{
		putchar(str[g]);
	}
/**

	if (g == "\0Holberton")
	
		break;
		
*/

	putchar('\n');
}
