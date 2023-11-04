#include <stdio.h>

int factorial(int n);

int main()
{
    
    int num = 5;
    int result = factorial(num);

    if (result == -1)
    {
        printf("Error: Negative input\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}

int factorial(int n)
{
    
    if (n < 0) {
        return -1; 
    }

    
    if (n == 0)
    {
        return 1;
    }

    
    return n * factorial(n - 1);
}

