#include <stdio.h>
/**
 * factorial - Calculate the factorial of a number.
 * @n: The number for which factorial is calculated.
 *
 * Return: The factorial of the given number.
 *         Returns -1 for negative input.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if  (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

