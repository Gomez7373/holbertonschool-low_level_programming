#include <stdio.h>
#include "main.h"

int factorial(int n)
int i;
i = 0;
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
int result = 1;
for (i = 2; i <= n; i++)
{
result *= i;
}
return result;
}
}

int main(void)
{

int result = factorial(5);
printf("Factorial of 5: %d\n", result);

result = factorial(0);
printf("Factorial of 0: %d\n", result);

result = factorial(-3);
printf("Factorial of -3: %d\n", result);

return 0;
}
