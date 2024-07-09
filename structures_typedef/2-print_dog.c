#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print elements of dog
 * @d: pointer to ttruct dog

 **/
void print_dog(struct dog *d)
{
	/* Memory and parameters check */
	if (d == NULL)
	{
		/* Renvoie un message d'erreur */
		exit(1);
	}

	/* Affiche les éléments de la struct */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
