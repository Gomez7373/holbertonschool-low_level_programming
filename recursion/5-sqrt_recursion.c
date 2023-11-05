/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n) 
{
int result;
result = _sqrt_recursion(n, 1);
return (result);
}
