#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Description: This function traverses the doubly linked list starting from
 * the given head node and prints the value of each node. It returns the number
 * of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{

size_t node_count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}

return (node_count);
}
