#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int count_words(char *str);
char **alloc_total_word(int t_words);

/**
 * strtow - split string into words
 * @str: string to split
 * Return: (s)
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, l = 0, len = 0, t_words = 0;	/* Compteur + longueur*/
	/* Tableau 2D */
	char **s;

	if (str == NULL || *str == '\0')	/* Conditions d'arrêt */
	{
		return (NULL);
	}

	t_words = count_words(str); /* Fonct comptant les mots de str */

	s = alloc_total_word(t_words); /* Fonct allouant la place pr nbre de mot */

	i = 0;  /* Remet l'index de str au début */
	while (str[i])  /* Parcourt str */
	{
		if (str[i] != 32) /* Les mots sont séparés par des espaces */
		{
			len = 0; /* Remise à 0 pour utilisation suivante */
			while (str[len] != 32) /* Tant que str[i] n'est pas un espace */
			{	len++; /* Compte la taille du mot */	}

			len++; /* Ajout d'une place pour l'octet de fin*/

			s[j] = malloc(len * sizeof(char)); /* Alloue len colonnes (1 char) */
			if (s[j] == NULL) /* Malloc check */
			{
				for (l = 0; l < k; l++)	/* Free si échec allocation */
				{	free(s[j]);	}
				free(s);
				return (NULL);
			}

			for (k = 0; str[i] != 32; k++, i++)   /* Copie le mot  de str[] vers s[j] */
			{	s[j][k] = str[i];	}

			s[j][k] = '\0'; /* Ajout de l'octet de fin */
			j++;	/* Incrémente les lignes */
		}
		else
		{
			i++; /* Si espace, passe au char suivant */
		}
	}
	s[j] = NULL; /* Dernier élément du tableau NULL */
	return (s);
}

/**
 * count_words - compte les mots dans la string
 * @str: string ou se trouve les mots
 * Return: (t_words)
 */
int count_words(char *str)
{
	int t_words = 0, i = 0; /* Nombre de mots et compteur */

	while (str[i])  /* Parcourt str */
	{
		if (str[i] != 32)	/* Les mots sont séparés par des espaces */
		{
			t_words++;  /* Compte le nombre de mots */

			while (str[i] != 32)    /* se déplace jusqu'au prochain espace */
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (t_words);
}

/**
 * alloc_total_word - Allocate memory in 2D array - lines
 * @t_words: number total of word in string
 * Return: (s)
 */
char **alloc_total_word(int t_words) /* Renvoie un double pointeur */
{
	char **s;

	s = malloc((t_words + 1) * sizeof(char *));	/* Alloue 1 mot/lig+élém NULL */

	if (s == NULL) /* Malloc check */
	{
		return (NULL);
	}
	return (s);
}

