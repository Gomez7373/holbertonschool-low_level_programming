#include <stdio.h>
#include "main.h"

int factorial(int n);

int main() {
    printf("Factorial of 5 is: %d\n", factorial(5));

    if (factorial(-3) == -1)
        printf("Error: Cannot calculate factorial for a negative number\n");

    return 0;
}

int factorial(int n)
{
    if (n < 0)
{
return -1;
}
else if (n == 0)
{
return 1; 
} 
else
{
int result = 1;
int i = 1;  
for (; i <= n; ++i)
{
result *= i;
}
return result;
}
}

