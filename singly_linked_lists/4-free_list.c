#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees the list_t list.
 * @head: A pointer to the head of the list_t.
 */
void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current->str); /*free the duplicatrd string*/
free(current); /*free the current node*/
current = next;
}
}
