#include "hash_tables.h"

/**
* key_index - Calculates the index of a key in a hash table array.
* @key: The key to calculate the index for.
* @size: The size of the array of the hash table.
*
* Return: The index at which the key should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;

if (key == NULL || size == 0)
return (0);

/* Calculate the hash value using hash_djb2 */
hash_value = hash_djb2(key);

/* Return the index within the size of the array */
return (hash_value % size);
}
