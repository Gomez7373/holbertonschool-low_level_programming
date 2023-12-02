#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: A pointer to a pointer to the head of the doubly linked list.
* @n: The value to be assigned to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
perror("Error: Unable to allocate memory for new node");
return (NULL);
}

/* Set the value of the new node */
new_node->n = n;
/* The new node will be the last node, so its 'next' is NULL */
new_node->next = NULL;

/* If the list is empty, the new node becomes the head */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse to the last node to update its 'next' */
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}

/* Set the 'prev' of the new node to the last node */
new_node->prev = temp;
/* Update the 'next' of the last node to point to the new node */
temp->next = new_node;

return (new_node);
}

