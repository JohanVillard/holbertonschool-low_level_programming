#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - choose func following operator
 * @s: operator
 *
 * Return: (Address of corresponding operator)
 */
int (*get_op_func(char *s))(int, int)
{

	int i = 0;	/* Compteur */
	op_t ops[] = {	/* Stocke les choix dans un structure */
	{"+", op_add},
	/*{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},*/
	{NULL, NULL}	/* Indique la fin de la structure */
	};



	while (ops[i].op != NULL) /* Tant la valeur de l'op dans la struc n'est NULL*/
	{
		if (*s == *(ops + i)->op)	/* Opé correspond à ceux dans ops[] */
		{
			return (&(*(ops + i)->f));	/* Appel la fonction correspondante */
		}
		i++;
	}
	return (0);
}