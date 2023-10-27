#include "main.h"
#include <stdio.h>


/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Description: This function copies the string pointed to by src to the buffer
 * pointed to by dest, including the terminating null byte ('\0').
 *
 * Return: A pointer to the destination buffer.
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
