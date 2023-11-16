#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to the struct dog to be freed
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
    {
        return; // Nothing to free if the pointer is NULL
    }

    free(d->name);   // Free memory for name
    free(d->owner);  // Free memory for owner
    free(d);         // Free memory for the struct dog
}

