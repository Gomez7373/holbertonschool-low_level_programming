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
	dlistint_t *new, *temp;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!idx)
		return (new->next = *h, new->prev = NULL, (*h) ? (*h)->prev = new : NULL, *h = new);

	for (temp = *h; idx-- && temp; temp = temp->next)
		continue;

	if (idx || !(new->prev = temp))
	{
		free(new);
		return (NULL);
	}

	return (new->next = temp->next, temp->next = (temp->next) ? (temp->next)->prev = new : NULL, new);
}

