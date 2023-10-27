#include "main.h"

void puts2(char *str) {
    for (int i = 0; str[i]; i += 2)
    {
        putchar(str[i]);
    }
    putchar('\n');
}

