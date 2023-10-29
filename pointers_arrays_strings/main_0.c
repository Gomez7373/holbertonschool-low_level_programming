/* main_0.c */
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "First, solve the problem. Then, write the code.";
    char *f;

    f = _strchr(s, '\0');
    printf("%s\n", (f == NULL ? " " : f));
    return (0);
}

