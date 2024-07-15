#include "function_pointers.h"

/**
 * int_index - search an integer in array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer of function
 *
 * Return: (1) if match, (-1) if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;	/* Compteur */

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)	/* Parcours array */
	{
		if (cmp(*(array + i)))	/* si la valeur du tableau à l'index i = 98 */
			return (i);	/* Renvoie l'index i si la valeur est trouvée */
	}

	return (-1); /* Renvoie moins si pas de correspondance */
}
