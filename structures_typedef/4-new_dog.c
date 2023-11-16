#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created struct dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    if (name == NULL || owner == NULL)
    {
        return NULL; /* Return NULL if name or owner is NULL */
    }

    /* Allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL)
    {
        return NULL; /* Return NULL if malloc fails */
    }

    /* Allocate memory for the name and owner, and copy the values */
    new_dog->name = strdup(name);
    new_dog->owner = strdup(owner);

    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        /* Free allocated memory if strdup fails */
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }

    new_dog->age = age;

    return new_dog;
}

