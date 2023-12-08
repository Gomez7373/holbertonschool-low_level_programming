#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: The number.
* @index: The index of the bit to clear.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);  /* Index out of bounds*/

*n &= ~(1UL << index);  /* Clear the bit at the given index*/
return (1);  /* Success*/
}