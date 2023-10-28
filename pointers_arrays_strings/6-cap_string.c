/* 0-cap_string.c */

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
    int capitalize = 1;

    while (*ptr)
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            *ptr = (capitalize) ? (*ptr & ~32) : (*ptr | 32);
            capitalize = 0;
        }
        else if (*ptr == ' ' || (*ptr >= '\t' && *ptr <= '\n') ||
                 *ptr == ',' || *ptr == ';' || *ptr == '.' ||
                 *ptr == '!' || *ptr == '?' || *ptr == '\"' ||
                 (*ptr >= '(' && *ptr <= '}'))
        {
            capitalize = 1;
        }
        ptr++;
    }

    return str;
}
