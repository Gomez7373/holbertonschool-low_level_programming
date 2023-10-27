#include "main.h"
#include <stdio.h>
#include <string.h>

void puts2(char *str, int max_chars)
{
	int g;
	
	g = 0;

    for (g = 0; str[g] && g < max_chars; g += 2)
    
   
    {
        putchar(str[g]);

    }
   putchar('\n');

}
	
