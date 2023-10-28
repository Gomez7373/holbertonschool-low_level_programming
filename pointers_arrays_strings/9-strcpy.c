#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
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
            if (result > (INT_MAX - digit) / 10)
            {
                // Handle overflow, e.g., print an error message or set result to a default value
                break;
            }

            result = result * 10 + digit;
        }
        else if (result != 0)  // Stop if we've already started parsing numbers
        {
            break;
        }

        s++;
    }

    return result * sign;
}

