/* 6-cap_string.c */

#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
    char *ptr = str;

    // Capitalize the first letter of the string
    if (*ptr >= 'a' && *ptr <= 'z')
        *ptr = (*ptr & ~32);

    while (*ptr)
    {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
            *ptr == ',' || *ptr == ';' || *ptr == '.' ||
            *ptr == '!' || *ptr == '?' || *ptr == '\"' ||
            *ptr == '(' || *ptr == ')' || *ptr == '{' ||
            *ptr == '}')
        {
            // If the next character is a lowercase letter, capitalize it
            if (*(ptr + 1) && (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z'))
                *(ptr + 1) = (*(ptr + 1) & ~32);
        }

        ptr++;
    }

    return str;
}

