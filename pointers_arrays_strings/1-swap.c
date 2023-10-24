#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: this is the variable swaping
 * @b: this is the variable swaping
 * return: void
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
