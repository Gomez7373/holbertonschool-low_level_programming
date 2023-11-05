#include <stdio.h>
/*
 * factorial - calculate the factorial of a number.
 * @n: The number which fctorial og the given number.
 * Return: -1mfor negative input.
 *
 */
int factorial(int n)
{
    if (n < 0)
	    return (-1);
	 else if  (n == 0)
        return (1);
    else
        return n * factorial(n - 1);
}

