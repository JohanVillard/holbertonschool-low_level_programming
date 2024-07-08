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
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	len ++;

	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	tmp = malloc(sizeof(char) * len);

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
