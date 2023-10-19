#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hex_digits[] = "0123456789abcdef";
    int s;
    for (s = 0; s < 16; ++s)
    {
        putchar(hex_digits[s]);
    }

    putchar('\n');

    return 0;
}
