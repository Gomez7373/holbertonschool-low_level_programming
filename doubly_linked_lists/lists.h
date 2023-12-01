#include <stddef.h>
#ifndef LISTS_H /*#ifndef:

This directive comes first. It stands for "if not defined" and checks
whether a particular macro has not been defined. */

#define LISTS_H /*#define:

This directive comes next. It is used to define the macro if it has
not been defined before. In the context of a header guard, it's used
to define a unique macro representing the header guard. */

/*
 * lists.h
 * Header file for doubly linked list operations.
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
/*Header File Content:

The actual content of the header file comes after the #define directive.
This is where you put the declarations, definitions,
and other content that you want to include in your source files. */

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /*LISTS_H*/
/*#endif:

Finally, the #endif directive marks the end of the block of code controlled
,,by the #ifndef. It closes the conditional block. */
