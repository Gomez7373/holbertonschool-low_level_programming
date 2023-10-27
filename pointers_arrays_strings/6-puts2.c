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

	for (g = 0; str[g] != '\0'; g += 2)

	{
		putchar(str[g]);
	}

/**
	if (g == '\0')
	
		break;
		*/

	putchar('\n');
}
