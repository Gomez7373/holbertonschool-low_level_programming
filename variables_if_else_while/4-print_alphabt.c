#include <stdio.h>
/**
 * main- This program will print lower case and exclude y  and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
for (s = 0; s < 26; s++)
{
if ('a' + s != 'e' && 'a' + s != 'q')
{
putchar('a' + s);
}
}
putchar('\n');

return (0);
}
