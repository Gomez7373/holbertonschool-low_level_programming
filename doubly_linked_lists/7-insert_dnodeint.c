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
dlistint_t *new, *temp = *h;

if (!h)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;

if (!idx)
{
new->prev = NULL, new->next = *h;
if (*h)
(*h)->prev = new;
return (*h = new);
}

for (; idx && temp; idx--)
temp = temp->next;

if (idx || !temp)
{
free(new);
return (NULL);
}

new->prev = temp, new->next = temp->next;
if (temp->next)
(temp->next)->prev = new;

temp->next = new;

return (new);
}

