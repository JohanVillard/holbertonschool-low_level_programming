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
    int i = 0, j = 0, k = 0, len = 0;
    /* Tableau 2D */
    char **s;

    /* Conditions d'arrêt */
    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }

    /* Compte le nombre de mots de str */

    /* Compte le nombre de char par mot */
    /* Ajoute l'octet de fin */

    /* Parcourt str */
    while (str[i])
    {
        if (str[i] != 32) /* Les mots sont séparés par des espaces */
        {
            s += malloc(sizeof(char*)); /* Alloue 1 ligne (1 pointeur) */
            if (s == NULL) /* Malloc check */
            {
                return (NULL);
            }

            while (str[i] != 32) /* Tant que str[i] n'est pas un espace */
            {
                len++; /* Compte la taille du mot */
                i++;
            }

            len += 2;  /* Ajout d'une place pour l'octet de fin et \n */

            s[j] += malloc(len * sizeof(char)); /* Alloue len colonnes (1 char) */
            if (s[j] == NULL) /* Malloc check */
            {
                return (NULL);
            }

            i -= len - 2;    /* Replace str en début de mot moins l'octet de fin */

            for (k = 0; k < len; k++)   /* Copie le mot  de str[] vers s[j] */
            {
                s[j][k] = str[i];
                i++;
            }
            s[j][k] = '\0'; /* Ajout de l'octet de fin */
            k++;
            s[j][k] = '\n'; /* Ajout du retour à la ligne */
        }

    }

	return (s);
}

