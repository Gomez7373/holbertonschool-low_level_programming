#include <stdio.h>
#include "main.h"
/**
 *  _puts_recursion - Print a string unig recursion.
 * @s: pointer to the string.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s +1);
}
else 
{
putchar('\n');
}
}
