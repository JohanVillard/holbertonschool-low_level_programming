#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print size member of array
 * @array: array to iterate
 * @size: number of member to print
 * @action: funcion to call
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0; /* Compteur */

	if (action == &print_elem)	/* Même adresse ? */
		for (i = 0; i < size; i++)	/* Parcours array */
			print_elem(*(array + i));	/* Affiche la valeur à l'index i */

	else if (action == &print_elem_hex)	/* Même adresse ? */
		for (i = 0; i < size; i++)	/* Parcours array */
			print_elem_hex(*(array + i));	/* Affiche la valeur à l'index i */
}
