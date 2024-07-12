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
	int i = 0, j = 0, k = 0, len = 0, t_words = 0;	/* Compteur+longueur */
	int tmp_i = 0; /* Première lettre du mot */
	/* Tableau 2D */
	char **s;

	if (str == NULL || *str == '\0')	/* Conditions d'arrêt */
	{
		return (NULL);
	}

	t_words = count_words(str); /* Fonct comptant les mots de str */

	if (t_words == 0)	/* Si pas de mot trouvé */
	{
		return (NULL);
	}

	s = alloc_total_word(t_words); /* 1 ptr = 1 mot */

	i = 0;  /* Remet l'index de str au début */
	while (str[i])  /* Parcourt str */
	{
		if (str[i] != 32 && str[i] != '\0') /* Mots sont séparés par des espaces */
		{
			tmp_i = i; /* Capture de la première lettre du mot */
			len = 0; /* Remise à 0 pour l'utilisation suivante */
			while (str[i] != 32) /* Tant que str[i] n'est pas un espace */
			{	len++;	/* Compte la taille du mot */
				i++;
			}

			len++; /* Ajout d'une place pour l'octet de fin*/

			s[j] = malloc(len * sizeof(char)); /* Alloue 1 colonne = 1 char */
			if (s[j] == NULL) /* Malloc check */
			{
				for (; j >= 0; j--)
					free(s[j]);	/* Free si échec allocation */
				free(s);
				return (NULL);
			}
			/* Copie du mot de str[tmp_i] -> s[j][k] !!! si fin de str alors stop */
			for (k = 0; str[tmp_i] != 32 && str[tmp_i] != '\0'; k++, tmp_i++)
				s[j][k] = str[tmp_i];	/* Pars du début du mot grâce à tmp_i */

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
		if (str[i] != 32)	/* Les mots sont séparés par des espaces(32) */
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

