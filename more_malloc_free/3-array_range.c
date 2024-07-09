#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create and fill an array with num by order
 * @min: first number
 * @max: last number
 * Return: (ptr)
 */
int *array_range(int min, int max)
{
	/* Déclare un pointeur */
	int *ptr;
	/* Déclare un compteur, et une taille de tableau */
	int i, len;

	/* Si le min est supérieur au max */
	if (min > max)
	{
		return (NULL);
	}

	/* Calcul de la taille à allouer */
	len = max - min;

	/* Si la taille est négative*/
	if (len < 0)
	{
		/* On la convertit en positif */
		len *= -1;
	}

	/* On ajoute le dernier chiffre */
	len++;

	/* Alloue la mémoire len * nsize */
	ptr = malloc(len * sizeof(int));

	/* Allocation réussie ?*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialise tout les membres à zero */
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;

		printf("i :  %d\n", i);
	}

	return (ptr);
}
