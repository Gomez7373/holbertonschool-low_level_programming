#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *
 */

char *create_array(unsigned int size, char c)
{
       char array;

if (size == 0)
{
	return (NULL);
}
{
	char *array;
	unsigned int i;

	array =(char *)malloc(size * sizeof (char));
	if (array == NULL)
{
	return (NULL);
}
	for (i = 0 ; i < size; i++)
{
	array [i] = c;
}
}
	return (array);
}
