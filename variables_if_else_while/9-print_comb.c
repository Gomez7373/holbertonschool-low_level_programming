#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int s = 0; s <= 9; ++s)
{
putchar(s + '0');

if (s < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
