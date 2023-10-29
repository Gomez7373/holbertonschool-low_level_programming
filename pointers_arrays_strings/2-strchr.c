#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.


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

return (found);
}
*/
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
 unsigned int i = 0;

 for (; *(s + i) != '\0'; i++)
  if (*(s + i) == c)
   return (s + i);
 if (*(s + i) == c)
  return (s + i);
 return ('\0');
}
