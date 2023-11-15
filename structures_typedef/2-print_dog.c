#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to be printed
 * 
 * Description: If the pointer to struct dog is NULL, do nothing.
 * Otherwise, print the name, age, and owner of the dog. If any
 * element is NULL, print "(nil)" instead.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

