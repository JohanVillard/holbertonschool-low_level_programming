#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of argument
 * @argv: 2D array where are stored arguments
 * Return: (int)
 */
int main(int argc, char *argv[])
{
	int bytes = 0, i = 0;
	int (*add_code_ptr)(int, char **);	/* Pointe une ligne de code */
	unsigned char *opcode_ptr;			/* Opcodes sont des octets - 1 char = 1 octet */

	if (argc != 2)						/* 2 arguments en entrée acceptés*/
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);				/* Conversion de l'entrée en integer */

	if (bytes < 0)						/* Pas de bytes négatives */
	{
		printf("Error\n");
		exit(2);
	}

	/* Pointe le point d'entrée qui est l'adresse de départ du programme */
	add_code_ptr = &main;

	/* 1 opcode = 1 octet dépend de l'architecture */
	/* On va dire que c'est le cas ici */
	/* Convertit l'adresse pointée pour parcourir chaque bytes */
	/* On part donc du premier opcode */
	opcode_ptr = (unsigned char *)add_code_ptr;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x ", *opcode_ptr);
		opcode_ptr++;
	}

	printf("\n");

	return (0);
}