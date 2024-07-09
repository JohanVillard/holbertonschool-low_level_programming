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
		/* Ne retourne rien*/
		return;
	}

	/* Libère les éléments d'abord, puis la structure */
	if (d->name == NULL)
	{
		/* Suivant */
	}
	else
	{
		free(d->name);
	}
	if (d->owner == NULL)
	{
		/* Suivant */
	}
	else
	{
		free(d->owner);
	}
	free(d);
}
