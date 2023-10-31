#include <stdio.h>
#include "main.h"
/**
 *
 */
void _puts_recursion(char *s)
{
	char g = 0;
if (*s != '\0')
{
	printf(*s);
	_puts_recursion(s +1);
}
else 
{
	putchar('\n')
}
}
