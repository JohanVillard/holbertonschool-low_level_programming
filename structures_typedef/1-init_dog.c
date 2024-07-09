#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog
 * @dog: pointer to struct dog
 * @name: string name
 * @age: his age
 * @owner: his owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Initialise tous les paramètres de la struc créée dans ailleurs */
    d->name = name;
    d->age = age;
    d->owner = owner;
}
