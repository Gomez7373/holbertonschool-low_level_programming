
#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a tring in revers using recursion.
 *@s : Pointer to string.
 *
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
