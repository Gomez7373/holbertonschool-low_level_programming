#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        printf("%d, ", n);

        if (n < 98)
            n++;
        else
            n--;
    }

    printf("%d\n", n);
}

int main(void)
{
    print_to_98(10);  // You can replace 10 with any other starting number
    return 0;
}

