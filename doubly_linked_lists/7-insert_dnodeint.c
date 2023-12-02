#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
* @h: A pointer to a pointer to the head of the doubly linked list.
* @idx: The index at which the new node should be inserted.
* @n: The value to be assigned to the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int count = 0;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
perror("Error: Unable to allocate memory for new node");
return (NULL);
}

/* Set the value of the new node */
new_node->n = n;

/* If inserting at the beginning, update the head */
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
{
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}

/* Traverse to the node before the insertion point */
temp = *h;
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}

/* Check if insertion point is valid */
if (temp == NULL)
{
free(new_node);
return (NULL);
}

/* Update pointers to insert the new node */
new_node->prev = temp;
new_node->next = temp->next;

if (temp->next != NULL)
{
temp->next->prev = new_node;
}

temp->next = new_node;

return (new_node);
}

