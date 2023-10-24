#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swaps the values of two integers.
 *
 * @s: chngs 
 *
 * return: void 
 */

void swap_int(int *a, int *b)
{
	int s;

	 s = *a;
	*a = *b;
	*b = s;
}
