#include "main.h"
#include <stdio.h>
#include <string.h>
void puts2(char *str)
{
	int g;
	
	g = 0;

    for (g = 0; str[g]; g++)
    {
        putchar(str[g]);
    }
   putchar('\n');
}
	
