#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 */
void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
