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
return (n < 0) ? -1 : (n == 0) ? 1 : n * factorial(n - 1);
}
