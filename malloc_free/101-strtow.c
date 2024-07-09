#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - split string into words
 * @str: string to split
 * Return: (s)
 */
char **strtow(char *str)
{
	/* Compteur et longueur*/
	int i = 0, j = 0, k = 0, len = 0, t_words = 0;
	/* Tableau 2D */
	char **s;

	/* Conditions d'arrêt */
	if (str == NULL || *str == '\0')
	{	return (NULL);	}
	while (str[i])  /* Parcourt str */
	{
		if (str[i] != 32)	/* Les mots sont séparés par des espaces */
		{
			t_words++;  /* Compte le nombre de mots */

			while (str[i] != 32)    /* se déplace jusqu'au prochain espace */
			{	i++;	}
		}	i++;	}
	s = malloc((t_words + 1) * sizeof(char *));	/* Alloue 1 mot/lig+élém NULL */
	if (s == NULL) /* Malloc check */
	{	return (NULL);	}
	i = 0;  /* Remet l'index de str au début */
	while (str[i])  /* Parcourt str */
	{
		if (str[i] != 32) /* Les mots sont séparés par des espaces */
		{
			while (str[len] != 32) /* Tant que str[i] n'est pas un espace */
			{	len++; /* Compte la taille du mot */	}
			len++; /* Ajout d'une place pour l'octet de fin*/
			s[j] = malloc(len * sizeof(char)); /* Alloue len colonnes (1 char) */
			if (s[j] == NULL) /* Malloc check */
			{	return (NULL);	}
			for (k = 0; str[i] != 32; k++, i++)   /* Copie le mot  de str[] vers s[j] */
			{	s[j][k] = str[i];	}
			s[j][k] = '\0'; /* Ajout de l'octet de fin */
			j++;	/* Incrémente les lignes */	}
		else
		{	i++; /* Si espace, passe au char suivant */	}}
	s[j] = NULL; /* Dernier élément du tableau NULL */
	return (s);	}

