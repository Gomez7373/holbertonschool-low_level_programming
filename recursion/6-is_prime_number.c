#include <math.h>

/**
 * is_prime_recursive - Helper function to check if a number is prime recursively
 * @n: The number to check
 * @i: The current divisor being checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	int sqrt;
if (n <= 1)
{
return (0);
}

if (i > sqrt)
{
return (1); 
}

if (n % i == 0)
{
return (0);
}

return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	
    return (is_prime_recursive(n, 2));
}

