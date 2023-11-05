#include "main.h"
/**
 * 
 * _squr_recursion_helper - Recursive function to calculate the square root.
 *
 * @n: The number to calculate the square root of.
 * @i: The current gues for the square root.
 *
 * Return: The square root of n, or 1 if n is 0 or 1,
 * or -1 if n is negative.
 */


int _sqrt_recursion_helper(int n, int i)
{
int result;

if (n == 0 || n == 1 || i * i > n)
{
return (1);
}

if (i * i == n)
{
return (i);
}

result = _sqrt_recursion_helper(n, i + 1);
return (result);
}

int _sqrt_recursion(int n)
{
int result;
if (n < 0)
{
return (-1);
}
result = _sqrt_recursion_helper(n, 1);

return (result);  
}
