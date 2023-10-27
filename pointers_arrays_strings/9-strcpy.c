#include "main.h"
#include <stdio.h>

/**
 *_strcpy - Copies the string pointed.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Returns: A pointer
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return original_dest;
}

