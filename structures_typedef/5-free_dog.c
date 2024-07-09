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
	free(d->name);
	free(d->owner);
	free(d);
}
