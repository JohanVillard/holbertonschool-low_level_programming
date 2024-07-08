#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: number of element of array
 * Return: (str)
 */
char *_strdup(char *str)
{
	char *tmp;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	len += 1;

	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	tmp = malloc(sizeof(char) * len);

	i = 0;
	while (i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';

	if (tmp == NULL)
	{
		return (NULL);
	}

	return (tmp);
}
