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
	/* Déclare une structure, les longueurs de string et compteurs */
	dog_t *d;
	int len1 = 0, len2 = 0, i;

	/* Arrete la fonction si l'age est négatif ou égal à 0 */
	if (age <= 0)
	{	return (NULL);	}

	/* Alloue la mémoire à la struct and check allocation */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{	return (NULL);	}

	/* Longueur de name et owner et ajout de l'octet de fin */
	while (name[len1])
	{	len1++;	}
	len1++;
	while (owner[len2])
	{	len2++;	}
	len2++;

	/* Alloue et libère (si echec) la mémoire des strings */
	d->name = malloc(len1 * sizeof(char));
	if (d->name == NULL)
	{	free(d);
		return (NULL);	}
	d->owner = malloc(len2 * sizeof(char));
	if (d->owner == NULL)
	{	free(d->name);
		free(d);
		return (NULL);	}

	/* Copy name dans d->name et owner dans d->owner */
	for (i = 0; i < len1; i++)
	{	d->name[i] = name[i];	}
	for (i = 0; i < len2; i++)
	{	d->owner[i] = owner[i];	}

	d->age = age;	/* Attribue age à age de la struct d */
	return (d);
}
