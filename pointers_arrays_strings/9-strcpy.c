#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @str: The input string.
 *
 * Description: This function converts the initial portion of the string pointed
 * to by str to its equivalent integer representation.
 *
 * Return: The converted integer.
 */

int _atoi(char *str)
{
    int result = 0;
    int sign = 1;

   
    while (*str == ' ')
        str++;

    
    if (*str == '-' || *str == '+')
    {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }

    
    while (*str >= '0' && *str <= '9')
    {
       
        if (result > INT_MAX / 10 || (*str - '0') > (INT_MAX - result * 10))
        {
            
            break;
        }

        result = result * 10 + (*str - '0');
        str++;
    }

    // Check for overflow after the conversion
    if (result == INT_MIN && sign == -1)
    {
        // Handle overflow for the specific case of INT_MIN
        // e.g., print an error message or set result to a default value
        return result;
    }

    // Multiply by sign to include the sign
    return result * sign;
}

