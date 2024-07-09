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
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Déclare une structure */
	dog_t *d;
	/* Déclare les longueurs de string */
	int len1 = 0, len2 = 0, i;

	/* Alloue la mémoire à la struct */
	d = malloc(sizeof(dog_t));
	/* Check allocation */
	if (d == NULL)
	{	return (NULL);	}
	/* Longueur de name et owner */
	while (name[len1])
	{	len1++;	}
	while (owner[len2])
	{	len2++;	}
	/* Ajout du caractère de fin */
	len1++;
	len2++;
	/* Alloue et libère (si echec) la mémoire des strings*/
	d->name = malloc(len1 * sizeof(char));
	if (d->name == NULL)
	{	return (NULL);	}
	d->owner = malloc(len2 * sizeof(char));
	if (d->owner == NULL)
	{	return (NULL);	}
	/* Copy name dans d->name owner dans d->owner */
	for (i = 0; i < len1; i++)
	{
		d->name[i] = name[i];
	}
	for (i = 0; i < len2; i++)
	{
		d->owner[i] = owner[i];
	}
	/* Attribue age à age de d */
	d->age = age;
	return (d);
}
