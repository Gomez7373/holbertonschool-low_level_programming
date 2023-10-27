#include "main.h"
#include <stdio.h>
#include <string.h>
void puts2(char *str)
{
	int g;
	
	g = 0;

    for (int g = 0; str[g]; g += 2)
    {
        _putchar(str[g]);
    }
   _putchar('\n');
}
	
