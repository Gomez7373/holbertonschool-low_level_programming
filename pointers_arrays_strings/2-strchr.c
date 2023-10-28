#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
char *found = NULL;

while (*s != '\0')
{
if (*s == c)
{
found = s;
break;
}

s++;
}

return found;
}
