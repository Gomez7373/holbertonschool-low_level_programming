#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a
* given position in a doubly linked list.
* @h: A pointer to the head of the doubly linked list.
* @idx: The index where the new node should be inserted.
* @n: The data to be stored in the new node.
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i;

if (!h)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
	(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

for (i = 0; i < idx - 1 && temp; i++)
temp = temp->next;

if (!temp)
{
free(new_node);
return (NULL);
}

new_node->prev = temp;
new_node->next = temp->next;

if (temp->next)
temp->next->prev = new_node;

temp->next = new_node;

return (new_node);
}
