#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - create an extensible double array
 * @width: integer columns
 * @height: integer line
 * Return: (s)
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	if (width <= 0 || height <= 0)
	{	return (NULL);	}
	/* Alloue la mémoire à toutes les lignes de s */
	/* (tableau de pointeur) int*(8 bytes) pointe vers chaque ligne*/
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
		/* int(4 bytes) stocke un entier dans chaque colonne de chaque ligne */
		s[i] = malloc(width * sizeof(int));
		/* Vérifie si l'allocation a fonctionnée */
		/* Sur la ligne soit le pointeur actuel*/
		if (s[i] == NULL)
		{
			/* Libère la mémoire déjà résa dans les col pour éviter les fuites */
			for (j = 0; j < i; j++)
			{	free(s[j]);	}
			/* Libère les lignes*/
			free(s);
			return (NULL);
		}
	}
	/* Initialise tout les éléments à 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{	s[i][j] = 0;	}
	}
	return (s);
}


