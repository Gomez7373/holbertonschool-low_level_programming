#include <stdio.h>

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{

int number = 25;
int i;
if (n < 0)
{
return (-1);
}


if (n == 0 || n == 1)
{
return (n);
}



for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return (i);
}
}


return (-1);
}

printf("The square root of %d is %d\n", number, _sqrt_recursion(number));

return (0);
}

