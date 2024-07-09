#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog
 * @d: pointer to ttruct dog
 * @name: string name
 * @age: his age
 * @owner: his owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Memory check */
	if (d == NULL)
	{
		exit(1);
	}

	/* Initialise tous les paramètres de la struc créée dans ailleurs */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

