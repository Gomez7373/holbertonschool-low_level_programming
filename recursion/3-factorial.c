#include <stdio.h>
/*
* factorial - Calculates the factorial of a number.
* @n: The number  fot which factorial calculated.
* Return: -1 mfor negative input.
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

