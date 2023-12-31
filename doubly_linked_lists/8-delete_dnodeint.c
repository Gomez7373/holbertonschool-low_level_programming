#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given
* index in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *to_delete;
unsigned int i;

if (!head || !(*head))
return (-1);

temp = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(temp);
return (1);
}

for (i = 0; i < index && temp; i++)
temp = temp->next;

if (!temp)
return (-1);

to_delete = temp;
temp->prev->next = temp->next;

if (temp->next)
temp->next->prev = temp->prev;

free(to_delete);
return (1);
}
