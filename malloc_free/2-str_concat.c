#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat- concatenate 2 strings
 * @s1: string
 * @s2: string to add
 * Return: (tmp)
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i = 0, j = 0;
	int len1 = 0, len2 = 0, len3 = 0;

	while (s1[len1])
	{	len1++;	}
	while (s2[len2])
	{	len2++;	}
	len3 = len1 + len2 + 1;
	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	tmp = malloc(sizeof(char) * len3);
	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	if (tmp == NULL)
	{	return (NULL);	}
	if (s1 == NULL)
	{	tmp = "";	}
	else
	{
		while (i < len1)
		{
			tmp[i] = s1[i];
			i++;
		}
	}
	if (s2 == NULL)
	{	tmp = "";	}
	else
	{
		while (j < len2)
		{
			tmp[i + j] = s2[j];
			j++;
		}
	}
	tmp[i + j] = '\0';
	return (tmp);
}

