#include "main.h"
#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
    int g;

    for (g = 2; str[g] != '\0'; g += 2)
    {
        if (g % 2 == 0)
        {
            putchar(str[g]);
        }
    }
    putchar('\n');
}

