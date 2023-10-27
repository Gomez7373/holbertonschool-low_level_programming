#include "main.h"

void puts2(char *str)
{
	int g;
	
	g = 0;

    for (int g = 0; str[g]; g += 2)
    {
        putchar(str[g]);
    }
    putchar('\n');
}
	
