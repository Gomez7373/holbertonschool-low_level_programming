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
	
result = _sqrt_recursion(n, 1);
return (result);


int _sqrt_recursion(int n)
{
int result = _sqrt_recursion_helper(n, 1);
return result;
}

int main()
{
int number = 25;
int result;

result = _sqrt_recursion(number);
printf("The square root of %d is %d\n", number, result);


return 0;
}
