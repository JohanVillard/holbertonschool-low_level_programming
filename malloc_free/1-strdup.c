#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an extensible array
 * @size: number of element of array
 * @c: element to insert in array
 * Return: ()
 */
char *_strdup(char *str)
{
	char *tmp;
	unsigned int i;

	/* Alloue la mémoire à s (size par la taille d'une char) */
	tmp = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	if (s == NULL)
	{
		return (NULL);
	}

	return (s);
}
