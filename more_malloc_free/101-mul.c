#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - multiply two numbers
* @argc: count arguments
* @argv: store arguments in string
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i, j, len1 = 0, len2 = 0;	/* Déclarations de variables */
	int tmp, *num1 = NULL, *num2 = NULL, *produit = NULL;

	if (argc == 3) /* Cmd + num1 + num2 */
	{		if (argv[1][0] == '0' || argv[2][0] == '0')	/* Cas zéro */
		{
			printf("0\n"); /* Le système gère la mem*/
			return (0);	/* Pas  de fuite de mémoire */
		}
		for (i = 1; i < argc; i++) /* Pointe chacun de nums */
		{
			for (j = 0; argv[i][j] != '\0'; j++) /* Passe sur chaque elem du tab */
			{
				if ((argv[i][j] > 47) && (argv[i][j] < 58)) /* Si c'est un chiffre */
				{
					if (i == 1)	/* Compte num1 */
						len1++;

					else if (i == 2)	/* Compte num2 */
						len2++;
				}
				else
				{
					printf("Error\n");	/* Si autre que chiffre */
					exit(98);
				}
			}
		}
		num1 = malloc(len1 * sizeof(int));	/* Alloue la mémoire de num1 */
		if (num1 == NULL)	/* Check */
			exit(98);
		for (i = 0; i < len1; i++)	/* Initialise tous les membres à zero */
			num1[i] = 0;	/* Pour éviter des comportements non définis */

		num2 = malloc(len2 * sizeof(int));	/* Alloue la mémoire de num2 */
		if (num2 == NULL)	/* Check */
		{
			free(num1);
			exit(98);
		}
		for (i = 0; i < len2; i++)	/* Initialise tous les membres à zero */
			num2[i] = 0;	/* Pour éviter des comportements non définis */

		produit = malloc((len1 + len2 + 1) * sizeof(int));	/* Alloue la mém de prod + 1(overflow) */
		if (produit == NULL)	/* Check */
		{
			free(num1);
			free(num2);
			exit(98);
		}
		for (i = 0; i < len1 + len2; i++)	/* Initialise tous les membres à zero */
			produit[i] = 0;	/* Pour éviter des comportements non définis */

		for (i = len1 - 1, j = 0; i >= 0; i--, j++)
			num1[j] = argv[1][i] - '0';	/* Stocke num1 à l'envers et conv en int */

		for (i = len2 - 1, j = 0; i >= 0; i--, j++)
			num2[j] = argv[2][i] - '0';	/* Stocke num2 à l'envers et conv en int */

		/* Multiplication d’un grand nombre par un nombre à un chiffre */
		for (i = 0; i < len2; i++) /* Voir wikipedia */
		{
			for (j = 0; j < len1; j++)
				produit[i + j] += num2[i] * num1[j];	/* Calc des prod interm*/
		}
		for (i = 0; i < len1 + len2; i++)	/* Addition des produits */
		{
			tmp = produit[i] / 10;	/* Dizaine à additionner à i + 1 */
			produit[i] = produit[i] % 10;	/* Chiffre posée (résultat définitif) */
			produit[i + 1] = produit[i + 1] + tmp;	/* (i + 1) + (dizaine de i) */
		}

		for (i = len1 + len2; i >= 0; i--)	/* Place i tout à la fin de produit */
		{	/* Le tab à été init à zéro */
			if (produit[i] > 0)	/* Alors c'est le premier chiffre de mon produit */
				break;
		}

		for (; i >= 0; i--)	/* Affiche le resultat dans le bon sens*/
			printf("%d", produit[i]);
		putchar('\n');	/* Saut de ligne */
		free(num1);	/* Libération des 3 tableaux */
		free(num2);
		free(produit);
	}
	else
	{
		printf("Error\n");	/* Si pas assez d'arguments */
		exit(98);
	}
	return (0);
}








