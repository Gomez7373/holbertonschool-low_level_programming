#include "main.h"
#include <stdio.h>
#include <string.h> 

void rev_string(char *s)
{
	int g;
	int c;
	c = 0;
	char temp;

	while (s[c] != '\0')
		c++;
	c--;
	for (g = 0; g < c; c--, g++)
	{
	temp = s[g];
	s[g] = s[c];
	s[c] = temp;
	}
}
