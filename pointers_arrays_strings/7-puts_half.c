#include "main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
    int length = strlen(str);
    int start_index = (length + 1) / 2;

    int i;  // Declare the loop variable before the loop

    for (i = start_index; i < length; i++)
    {
        putchar(str[i]);
    }

    putchar('\n');
}

int main()
{
    char example_str[] = "Hello, World!";
    puts_half(example_str);

    return 0;
}

