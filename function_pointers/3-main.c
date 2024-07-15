#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Count the number of argument
 * @argv: Store the argument
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, result = 0;	/* Nombre à calculer */
	/*int (*pf)(int, int);Pointeur de fonction */

	if (argc != 4)	/* Vérifie le nombre d'arguments */
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	&& *argv[2] != '/' && *argv[2] != '%')	/* Vérifie l'opérateur' */
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%')	/* Vérif la div ou le mod par 0 */
	&& *argv[3] == 48)	/* Seule le code ASCII du zéro fonctionne... */
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]); /* Convertit en nombre */
	b = atoi(argv[3]);
	/* On récupère l'adresse de la function de calcul */
	/* que la fonction get_func a choisi suivant l'opérateur */
	/* Puis le résultat est calculé avec les paramètres a et b*/
	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);	/* Affiche le résultat stocké */
	return (0);
}
