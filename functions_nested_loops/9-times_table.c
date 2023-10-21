#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int r, c;

for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
int result = r * c;

if (c > 0)
{
_putchar(',');
_putchar(' ');
}

if (result < 10)
{
_putchar(' ');
}

if (result >= 10)
{
_putchar(result / 10 + '0');
}

_putchar(result % 10 + '0');
}
_putchar('\n');
}
return (0);
}

