#include <stdio.h>
#include "dog.h"

int main(void)
{
struct dog *my_dog;

    /* Creating a new dog*/
    my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (my_dog == NULL)
    {
        printf("Failed to create a new dog\n");
        return 1;
    }

    /* Printing dog details*/
    printf("My name is %s, I am %.2f, and my owner is %s\n",
           my_dog->name, my_dog->age, my_dog->owner);

    /* Freeing memory for the dog*/
    free_dog(my_dog);

    return 0;
}

