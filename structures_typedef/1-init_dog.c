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
	/* Memory and parameters check */
	if (d == NULL || name == NULL || owner == NULL || age <= 0)
	{
		/* Renvoie ...rien */
		return;
	}

	/* Initialise tous les paramètres de la struc créée dans ailleurs */
	d->name = name;
	d->owner = owner;
	d->age = age;
}

