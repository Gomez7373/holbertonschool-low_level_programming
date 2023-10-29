/* 4-strpbrk.c */
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string.
 * @accept: The string containing acceptable bytes.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (_strchr(accept, *s) != NULL)
            return s;
        s++;
    }

    return NULL;
}
