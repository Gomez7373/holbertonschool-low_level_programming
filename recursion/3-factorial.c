#include <stdio.h>

/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return 1;
}
else
{
return n * factorial(n - 1);
}
}

int main(void)
{
int result;
result = factorial(5);
printf("Factorial of 5: %d\n", result);

result = factorial(0);
printf("Factorial of 0: %d\n", result);

result = factorial(-3);
printf("Factorial of -3: %d\n", result);

return 0;
}
