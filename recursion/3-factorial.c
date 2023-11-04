#include <stdio.h>

int factorial(int n);

int main() {
    // Example usage:
    int num = 5;
    int result = factorial(num);

    if (result == -1) {
        printf("Error: Negative input\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}

int factorial(int n) {
    // Check for negative input
    if (n < 0) {
        return -1; // Error: Negative input
    }

    // Base case: Factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

