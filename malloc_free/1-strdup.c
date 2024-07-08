#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: number of element of array
 * Return: (tmp) or (NULL)
 */
char *_strdup(char *str)
{
	char *tmp;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	len++;

	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	tmp = malloc(len * sizeof(char));
	/* Vérifie si l'allocation a fonctionnée */
	if (tmp == 0)
	{
		return (NULL);
	}

	while (i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';

	return (tmp);
}

