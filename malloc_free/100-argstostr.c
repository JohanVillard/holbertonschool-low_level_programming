#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concat args of command
 * @ac: integer argc
 * @av: integer argv
 * Return: (s)
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0, depart_concat = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Compte la taille de tous les arguments */
	for (i = 0; i < ac; i++)
	{
		while (av[i][len])
		{	len++;	}
		/* !!! Le retour à la ligne est un caractère !!!*/
		/* Ajoute 1 pour la nouvelle ligne*/
		/* Reset du compteur de longeur */
		total_len += len + 1;
		len = 0;	}
	/* Alloue la mémoire nécéssaire + l'octet de fin et check */
	/* char (1 bytes) stocke variable */
	s = malloc(1 + total_len * sizeof(char));
	if (s ==  NULL)
	{	return (NULL);	}
	/* Copie la string actuelle du double tableau vers le simple tableau */
	/* Copie 1 mot par ligne */
	for (i = 0; i < ac; i++)
	{
		/* Jusqu'à la fin du mot */
		for (j = 0; av[i][j] != '\0'; j++)
		{
			/* Copie chaque char dans le nouveau tableau */
			s[depart_concat] = av[i][j];
			depart_concat++; }
		/*!!! Le retour à la ligne est un caractère !!! */
		/* Ligne très importante. Il peux effacer la string */
		/* Il doit être compté en tant qu'élément de s */
		s[depart_concat] = '\n';
		depart_concat++;
	}
	return (s);
}

