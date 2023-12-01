#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: A pointer to a pointer to the head of the doubly linked list.
* @n: The value to be assigned to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
perror("Error: Unable to allocate memory for new node");
return (NULL);
}

/* Set the value of the new node */
new_node->n = n;
/* Set the 'prev' pointer to NULL as it will be the new head */
new_node->prev = NULL;
/* Set the 'next' pointer to the current head */
new_node->next = *head;

/* Update the 'prev' of the current head if it exists */
if (*head != NULL)
{
(*head)->prev = new_node;
}

/* Update the head to point to the new node */
*head = new_node;

return (new_node);
}
