#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_at_beginning - Inserts a new node at the beginning of a dlistint_t list.
*/
dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

/**
* traverse_to_insertion_point - Traverses a dlistint_t list to the insertion point.
*/
dlistint_t *traverse_to_insertion_point(dlistint_t **h, unsigned int idx)
{
dlistint_t *temp = *h;
unsigned int count = 0;

while (temp != NULL && count < idx)
{
temp = temp->next;
count++;
}

return (temp);
}

/**
* update_pointers_for_insertion - Updates pointers for inserting a new node.
*/
void update_pointers_for_insertion(dlistint_t *temp, dlistint_t *new_node)
{
new_node->prev = temp;
new_node->next = temp->next;

if (temp->next != NULL)
temp->next->prev = new_node;

temp->next = new_node;
}

/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
perror("Error: Unable to allocate memory for new node");
return (NULL);
}

new_node->n = n;

if (idx == 0)
return (insert_at_beginning(h, new_node));

temp = traverse_to_insertion_point(h, idx - 1);
if (temp == NULL)
{
free(new_node);
return (NULL);
}

update_pointers_for_insertion(temp, new_node);

return (new_node);
}
