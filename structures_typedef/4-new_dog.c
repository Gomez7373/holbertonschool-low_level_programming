#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new struct dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
* Return: Pointer to the newly created struct dog, or NULL if it fails
*/
struct dog *new_dog(char *name, float age, char *owner)
{
struct dog *new_dog;

if (name == NULL || owner == NULL)
{
return (NULL);
}

new_dog = malloc(sizeof(struct dog));

if (new_dog == NULL)
{
return (NULL);
}

/* Allocate memory for name and owner*/
new_dog->name = malloc(strlen(name) + 1);
new_dog->owner = malloc(strlen(owner) + 1);

if (new_dog->name == NULL || new_dog->owner == NULL)
{
/* Free allocated memory if allocation fails*/
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}

/* Copy the strings to the allocated memory*/
strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);

new_dog->age = age;

return (new_dog);
}

/**
* free_dog - Frees memory allocated for a struct dog
* @d: Pointer to the struct dog to be freed
*/
void free_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
