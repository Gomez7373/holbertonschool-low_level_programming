#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string.
 * @accept: The string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int r, g;
	int c = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] != 32)
		{
			for (g = 0; accept[g] != '\0'; g++)
			{
				if (s[r] == accept[g])
					c++;
			}
		}

		else
			return (c);
	}
	return (c);
}
