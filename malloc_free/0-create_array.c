#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an extensible array
 * @size: number of element of array
 * @c: element to insert in array
 * Return: (s)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	/* Alloue la mémoire à s (size par la taille d'une char) */
	s = malloc(size * sizeof(char));

	/* Vérifie si l'allocation a fonctionnée */
	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';



	return (s);
}
