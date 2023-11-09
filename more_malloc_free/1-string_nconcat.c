#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes of s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++);

for (len2 = 0; s2[len2] != '\0'; len2++);

if (n >= len2)
n = len2;

concatenated = malloc(sizeof(char) * (len1 + n + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < n; j++, i++)
concatenated[i] = s2[j];

concatenated[i] = '\0';

return (concatenated);
}

