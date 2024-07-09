#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: number of byte
 * Return: (ptr)
 */
void *malloc_checked(unsigned int b)
{
	/* Déclare un pointeur */
	void *ptr;

	/* Initialise le pointeur à l'adresse donnée par malloc */
	ptr = malloc(b);

	/* Allocation réussie ? */
	if (ptr == NULL)
	{
		/* Sort avec le code 98 si malloc a échoué */
		exit(98);
	}

	/* Retourne le pointeur */
	return (ptr);
}
