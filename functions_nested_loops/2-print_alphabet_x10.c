#include "main.h"

/**
 * print_alphabet_x10(void) - it prints 10 times.
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char s;
	int g = 0;

	while (g <= 9)
{
	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
	g++;
}
}
