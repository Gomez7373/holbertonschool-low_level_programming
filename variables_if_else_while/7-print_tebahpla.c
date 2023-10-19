#include <stdio.h>
/**
 * main - reverse lettering
 *
 * Return: Always 0 (Success)
 */
char main(void)
{
for (int s = 'z'; s >= 'a'; --s)
{
putchar(s);
}
putchar('\n');

return (0);
}
