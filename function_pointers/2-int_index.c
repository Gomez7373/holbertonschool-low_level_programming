#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Index of the first element for which the cmp function
 * does not return 0, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
