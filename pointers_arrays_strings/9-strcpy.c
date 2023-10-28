#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to a long long integer.
 * @s: The input string.
 *
 * Return: The converted long long integer.
 */
int _atoi(char *s)
{
    long long result = 0;
    int sign = 1;
    int digit;

    while (*s)
    {
        if (*s == '-' || *s == '+')
        {
            sign = (*s == '-') ? -1 : 1;
            s++;
        }

        if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';

            // Check for overflow before the multiplication and addition
            if (result > (LLONG_MAX - digit) / 10)
            {
                // Handle overflow, e.g., print an error message or set result to a default value
                fprintf(stderr, "Error: Overflow\n");
                return 0;  // Or any other suitable default value
            }

            result = result * 10 + digit;
        }
        else if (result != 0)  // Stop if we've already started parsing numbers
        {
            break;
        }

        s++;
    }

    // Explicitly check for overflow before returning the result
    if (result > INT_MAX || result < INT_MIN)
    {
        fprintf(stderr, "Error: Overflow\n");
        return 0;  // Or any other suitable default value
    }

    return (int)(result * sign);
}

