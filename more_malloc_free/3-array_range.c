#include <stdlib.h>

/**
 * array_range - Create and fill an array with num by order
 * @min: first number
 * @max: last number
 * Return: (0)
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

	/* Calcul de la taille à allouer plus l'octet de fin */
	len = max - min + 1;

	/* Alloue la mémoire ode nmemb of nsize */
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
	}

	return (ptr);
}

