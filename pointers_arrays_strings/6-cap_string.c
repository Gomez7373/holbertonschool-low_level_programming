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

    while (*ptr)
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            *ptr = (*ptr >= 'a' && *ptr <= 'z') ? (*ptr & ~32) : *ptr;

            // Skip the rest of the word
            while (*(ptr + 1) && ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')))
            {
                ptr++;
            }
        }
        ptr++;
    }

    return str;
}

