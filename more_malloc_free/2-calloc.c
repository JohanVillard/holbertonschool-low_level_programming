#include <stdlib.h>

/**
 * _calloc - Allocate memory and set to 0
 * @nmemb: number of members in array
 * @size: size of each member
 * Return: (ptr)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Déclare un pointeur */
	char *ptr;
	/* Déclare un compteur */
	unsigned int i;
	/* Déclare une taille */
	unsigned int total_size;

	/* Stop la fonction si la taille n'est pas supérieure à zéro */
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	/* Taille total à allouer */
	total_size = nmemb * size;

	/* Alloue la mémoire de nmemb of nsize */
	ptr = malloc(total_size);

	/* Allocation réussie ?*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialise tous les membres à zero */
	/* Toute la mémoire, pas seulement le premier octet*/
	/* Chaque byte doit ếtre mis à 0!!!*/
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

