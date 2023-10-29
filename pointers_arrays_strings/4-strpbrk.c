#include "main.h"
#include <stddef.h>
#include <string.h>
/**
  * _strpbrk - searches a string for a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
 int a = 0, b;

 while (s[a])
 {
  b = 0;

  while (accept[b])
  {
   if (s[a] == accept[b])
   {
    s += a;
    return (s);
   }

   b++;
  }

  a++;
 }

 return ('\0');
}
