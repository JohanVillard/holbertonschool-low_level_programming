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
	/* Len sera toujours non-négative */
	if (min > max)
	{
		return (NULL);
	}

	/* Calcul de la taille à allouer */
	len = max - min;

	/* On ajoute le dernier chiffre */
	len++;

	/* Alloue la mémoire len * nsize */
	ptr = malloc(len * sizeof(int));

	/* Allocation réussie ?*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* i s'incrémente jusqu'à len exclus*/
	for (i = 0; i < len; i++)
	{
		/* Incrémente i a min*/
		ptr[i] = i + min;
	}

	return (ptr);
}

