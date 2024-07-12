#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_all(void *ptr1, void *ptr2, void *ptr3);
void free_and_exit(void *ptr1, void *ptr2, void *ptr3);

/**
* main - multiply two numbers
* @argc: count arguments
* @argv: store arguments in string
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i = 0, j = 0, len1 = 0, len2 = 0;	/* Déclarations et init des variables */
	int tmp = 0, *num1 = NULL, *num2 = NULL, *produit = NULL;

	if (argc != 3) /* Cmd + num1 + num2 */
	{
		printf("Error\n");	/* Si pas assez d'arguments */
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')	/* Cas zéro */
	{
		printf("0\n"); /* Le système gère la mem*/
		return (0);	/* Pas de fuite de mémoire ici */
	}
	for (i = 1; i < argc; i++) /* Pointe chacun de nums */
	{
		for (j = 0; argv[i][j] != '\0'; j++) /* Passe sur chaque elem du tab */
		{
			if ((argv[i][j] > 47) && (argv[i][j] < 58)) /* Si c'est un chiffre */
			{
				if (i == 1)
					len1++; /* Compte num1 */
				else if (i == 2)
					len2++;	/* Compte num2 */
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
		free_and_exit(num1, num2, produit);
	for (i = 0; i < len1; i++)	/* Initialise tous les membres à zero */
		num1[i] = 0;	/* Pour éviter des comportements non définis */
	num2 = malloc(len2 * sizeof(int));	/* Alloue la mémoire de num2 */
	if (num2 == NULL)	/* Check */
		free_and_exit(num1, num2, produit);
	for (i = 0; i < len2; i++)	/* Initialise tous les membres à zero */
		num2[i] = 0;	/* Pour éviter des comportements non définis */
	produit = malloc((len1 + len2 + 1) * sizeof(int));	/* Mém prod + 1(OFlow) */
	if (produit == NULL)	/* Check */
		free_and_exit(num1, num2, produit);
	for (i = 0; i < len1 + len2 + 1; i++)	/* Init tous les membres à zero */
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
	free_and_exit(num1, num2, produit);
	return (0);
}

/**
 * free_all - Free 3 blocks of memories
 * @ptr1: to free
 * @ptr2: to free
 * @ptr3: to free
 * Return: (void)
 */
void free_all(void *ptr1, void *ptr2, void *ptr3)
{
	free(ptr1);
	free(ptr2);
	free(ptr3);
}

/**
 * free_and_exit - Free 3 blocks of memories and exit
 * @ptr1: to free
 * @ptr2: to free
 * @ptr3: to free
 * Return: (void)
 */
void free_and_exit(void *ptr1, void *ptr2, void *ptr3)
{
	free(ptr1);
	free(ptr2);
	free(ptr3);
	exit(98);
}








