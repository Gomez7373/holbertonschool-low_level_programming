#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given
* index in a doubly linked list.
* @h: A pointer to the head of the doubly linked list.
* @idx: The index where the new node should be inserted.
* @n: The data to be stored in the new node.
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *temp;

if (!h)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;

if (idx == 0)
{
new->prev = NULL;
new->next = *h;
if (*h)
(*h)->prev = new;
*h = new;
return (new);
}

temp = *h;
for (; idx > 0 && temp; idx--)
temp = temp->next;

if (idx != 0)
{
free(new);
return (NULL);
}

new->prev = temp->prev;
new->next = temp;

if (temp->prev)
(temp->prev)->next = new;

temp->prev = new;

return (new);
}
