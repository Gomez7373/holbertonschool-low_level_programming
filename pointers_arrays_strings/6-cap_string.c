/* 0-cap_string.c */

#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *)
{
    char *ptr = str;
    int capitalize = 1;  /* Flag to indicate whether the next character should be capitalized */

    while (*ptr != '\0')
    {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
            *ptr == ',' || *ptr == ';' || *ptr == '.' ||
            *ptr == '!' || *ptr == '?' || *ptr == '\"' ||
            *ptr == '(' || *ptr == ')' || *ptr == '{' ||
            *ptr == '}')
        {
            capitalize = 1;
        }
        else if (*ptr >= 'a' && *ptr <= 'z' && capitalize)
        {
            *ptr = (char)(*ptr - 'a' + 'A');
            capitalize = 0;
        }

        ptr++;
    }

    return (str);
}
