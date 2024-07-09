#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings
 * @s1: string
 * @s2: string to add
 * Return: (tmp)
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i, j;
	int len1 = 0, len2 = 0, len3 = 0;

	if (s1 == NULL)
	{	s1 = "";	}
	if (s2 == NULL)
	{	s2 = "";	}

	while (s1[len1])
	{	len1++;	}
	while (s2[len2])
	{	len2++;	}

	len3 = len1 + len2 + 1;
	/* Alloue la mémoire à tmp (taille de str par la taille d'une char) */
	tmp = malloc(sizeof(char) * len3);
	/* Vérifie si l'allocation a fonctionnée */
	if (tmp == NULL)
	{	return (NULL);	}

	for (i = 0; i < len1; i++)
	{
		tmp[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		tmp[i + j] = s2[j];
	}
	tmp[i + j] = '\0';
	return (tmp);
}

