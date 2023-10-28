#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to a long long integer.
 * @str: The input string.
 *
 * Description: This function converts the initial portion of the string pointed
 * to by str to its equivalent long long integer representation.
 *
 * Return: The converted long long integer.
 */

long long _atoi(char *str)
{
    long long result = 0;
    int sign = 1;

    // Skip leading whitespaces
    while (*str == ' ')
        str++;

    // Handle sign
    if (*str == '-' || *str == '+')
    {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }

    // Convert digits to long long integer
    while (*str >= '0' && *str <= '9')
    {
        // Check for overflow before the multiplication and addition
        if (result > LLONG_MAX / 10 || (*str - '0') > (LLONG_MAX - result * 10))
        {
            // Handle overflow, e.g., print an error message or set result to a default value
            // and break out of the loop.
            break;
        }

        result = result * 10 + (*str - '0');
        str++;
    }

    // Multiply by sign to include the sign
    return result * sign;
}

