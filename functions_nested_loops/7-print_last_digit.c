#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int ld = n % 10;

    if (ld < 0)
    {
        ld = -ld;
    }

    _putchar("%d", ld);

    return ld;
}

