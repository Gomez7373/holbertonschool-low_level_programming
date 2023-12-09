#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current;
    unsigned long int index;
    if (!ht || !key || !*key || !value) return (0);
    index = key_index((const unsigned char *)key, ht->size);
    for (current = ht->array[index]; current; current = current->next)
    {
        if (!strcmp(current->key, key))
        {
            free(current->value); return !!(current->value = strdup(value));
        }
    }
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node) return (0);
    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node); return (0);
    }
    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node); return (0);
    }
    new_node->next = ht->array[index];
    ht->array[index] = new_node; return (1);
}
