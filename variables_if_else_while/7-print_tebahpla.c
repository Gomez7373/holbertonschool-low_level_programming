#include <stdio.h>
/**
 * main - reverse lettering
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
for (s = 'z'; s >= 'a'; --s)
{
putchar(s);
}
putchar('\n');

return (0);
}
