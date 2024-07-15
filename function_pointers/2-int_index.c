#include "function_pointers.h"

/**
 * int_index - search an integer in array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer of function
 *
 * Return: (i) if match, (-1) if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;	/* Compteur */

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)	/* Parcours array */
	{
		if (cmp(array[i]) != 0)	/* Si cmp retourne 1 */
			return (i);	/* Renvoie l'index i si la valeur est trouvée */
	}
	if (i == size)	/* Si aucun élément ne match */
	{
		return (-1); /* La fonction ne renvoie pas 0 */
	}
	return (-1);
}
