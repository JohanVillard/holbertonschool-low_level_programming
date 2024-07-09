#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: struct to free
 * Return: (0)
 **/
void free_dog(dog_t *d)
{
	/* Check memory */
	if (d == NULL)
	{
		exit(1);
	}

	/* Libère les éléments d'abord, puis la structure */
	free(d->name);
	free(d->owner);
	free(d);
}
