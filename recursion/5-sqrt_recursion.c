#include <stdio.h>

/**
 * _sqrt_recursion_helper - Recursive helper function to find the square root.
 * @n: The number for which to find the square root.
 * @i: The current value to check for the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion_helper(int n, int i) {
    int result;

    /* Base case: if n is 0 or 1, or i exceeds n, return -1 */
    if (n == 0 || n == 1 || i * i > n) {
        return -1;
    }

    /* Base case: if i * i equals n, return i (found the square root) */
    if (i * i == n) {
        return i;
    }

    /* Recursive case: increment i and continue the search */
    result = _sqrt_recursion_helper(n, i + 1);
    return result;
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n) {
    int result;

    /* Call the helper function starting with i = 1 */
    result = _sqrt_recursion_helper(n, 1);
    return result;
}

int main() {
    int number = 25;
    int result;

    result = _sqrt_recursion(number);
    printf("The square root of %d is %d\n", number, result);

    return 0;
}

