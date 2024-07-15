#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Choose func following operator
 * @s: operator
 *
 * Return: (Address of function corresponding with operator)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;	/* Compteur */
	op_t ops[] = {	/* Stocke les choix dans une structure */
	{"+", op_add},	/* Chaque opé à sa fonction correspodante */
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}	/* Indique la fin de la structure */
	};

	while (ops[i].op != NULL) /* Tant la val de l'op dans la struc != NULL*/
	{
		if (*s == *(ops + i)->op)	/* Opé correspond à ceux dans ops[] */
		{
			return (*(ops + i)->f);	/* Appel la fonction correspondante */
		}
		i++;
	}
	return (NULL);
}
