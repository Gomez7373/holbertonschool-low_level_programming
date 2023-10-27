#include "main.h"
#include <stdio.h>

/** _strcpy - copies the string pointed.
 * @dest: the destination buffer.
 * @src: the source string.
 * Return: a pointer to destination buffer.
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

return (original_dest);
}
