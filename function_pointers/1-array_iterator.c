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

	for (i = 0; i < size; i++)	/* Parcours array */
		action(*(array + i));	/* Affiche la valeur à l'index i */
}
