#include "main.h"
#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
	int g;
	
	g = 0;

    for (g = 00; g < 224 && str[g] != '\0'; g += 2)
    
   
    {
        putchar(str[g]);

    }
   putchar('\n');

}
	
