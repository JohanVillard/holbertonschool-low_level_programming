#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: .
 * @age: .
 * @owner: .
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age __attribute__((unused)), char *owner)
{
	/* Déclare une structure */
	dog_t *d;

	/* Alloue la mémoire à la struct */
	d = malloc(sizeof(dog_t));

	/* Check allocation */
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = name;
	d->owner = owner;

	return (d);
}
