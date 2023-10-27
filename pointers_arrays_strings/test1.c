#include "main.h"
#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
	int g;
	
	g = 0;

    for (str[g] != '0'; g++;)
    if (g % 2 == 0)
   
    {
        putchar(str[g]);
}
   putchar('\n');

}
	
