#include "main.h"

/**
 * print_alphabet_x10 - it prints the alphabet x10.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
    int s;
    int count;

    for (count = 0; count < 10)
    {
        for (s = 'a'; s <= 'z'; s++)
        {
            _putchar(s);
        }
	count++;
        _putchar('\n');
    }
}
