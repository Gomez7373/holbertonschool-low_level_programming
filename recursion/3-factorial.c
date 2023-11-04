#include <stdio.h>

unsigned long long factorial(int n);

int main(void)
{
    int number;
    
    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and print the factorial
    printf("Factorial of %d = %llu\n", number, factorial(number));

    return 0;
}

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

