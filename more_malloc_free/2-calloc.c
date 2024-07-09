#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory and set to 0
 * @nmemb: number of members in array
 * @size: size of each member
 * Return: (0)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Déclare un pointeur */
	char *ptr;
	/* Déclare un compteur */
	unsigned int i;

	/* Stop la fonction si la taille n'est pas supérieure à zéro */
	if (size == 0)
	{
		return (NULL);
	}

	/* Alloue la mémoire ode nmemb of nsize */
	ptr = malloc(nmemb * size);

	/* Allocation réussie ?*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialise tout les membres à zero */
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

