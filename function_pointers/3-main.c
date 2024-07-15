#include <stdio.h>
#include "3-get_op_func.c"

/**
 * main - Entry point
 * @argc: Count the number of argument
 * @argv: Store the argument
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 4)	/* Vérifie le nombre d'arguments */
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[3] != '+' || argv[3] != '-' || argv[3] != '*'
	|| argv[3] != '/' || argv[3] != '%')	/* Vérifie l'opérateur' */
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[3] == '/' || argv[3] != '%') && argv[4] == 0)	/* Vérifie la div ou le modulo par 0 */
	{
		printf("Error\n");
		exit(100);
	}

	get_op_func(argv[3]);	/* Choix de la func suivant l'opérateur */
}