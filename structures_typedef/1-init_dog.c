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
		free(d);
		exit(1);
	}

	/* Initialise tous les paramètres de la struc créée dans ailleurs */
	/* Check chaque pointer*/
	if (name == NULL)
	{
		free(d);
		exit(1);
	}

	d->name = name;

	if (owner == NULL)
	{
		free(name);
		free(d);
		exit(1);
	}
	d->owner = owner;
	d->age = age;
}

