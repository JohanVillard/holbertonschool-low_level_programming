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
	/* Affiche (nil) si un élément est NULL*/
	if (d->name == NULL)
	{ 
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{ 
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{ 
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
