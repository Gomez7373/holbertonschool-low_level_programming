#include<stdio.h>
/**
 * main - The program will print lower case and then upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s;
int g;

for (s = 0; s < 26; s++)
{
putchar('a' + s);
}
for (g = 0; g < 26; g++)
{
putchar('A' + g);
}
putchar('\n');

return (0);
}
