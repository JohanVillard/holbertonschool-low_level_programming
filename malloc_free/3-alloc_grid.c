#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - create an extensible double array
 * @width: integer columns
 * @height: integer line
 * Return: (array)
 */
int **alloc_grid(int width, int height)
{
	int **s, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Alloue la mémoire à toutes les lignes de s */
	/* (ligne par la taille d'une char) */
	s = malloc(height * sizeof(int *));
	/* Vérifie si l'allocation a fonctionnée */
	if (s == NULL)
	{
		return (NULL);
	}
	/* Pour chaque ligne */
	for (i = 0; i < height; i++)
	{
		/* Alloue la mémoire des colonnes */
		s[i] = malloc(width * sizeof(int *));
		/* Vérifie si l'allocation a fonctionnée */
		if (s[i] == NULL)
		{
			return (NULL);
		}
	}
	return (s);
}


