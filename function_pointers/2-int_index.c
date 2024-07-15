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

	if (cmp == &is_98)	/* Adresse égale ? */
	{
		for (i = 0; i < size; i++)	/* Parcours array */
			if (is_98(*(array + i)))	/* si la valeur du tableau à l'index i = 98 */
				return (i);	/* Renvoie l'index i si la valeur est trouvée */
		return (-1);	/* Renvoie moins si pas de correspondance */
	}

	if (cmp == &is_strictly_positive)	/* Adresse égale ? */
	{
		for (i = 0; i < size; i++)	/* Parcours array */
			if (is_strictly_positive(*(array + i)))	/* si la val du tab à i = 98 */
				return (i);	/* Renvoie l'index i si la valeur est trouvée */
		return (-1);	/* Renvoie moins si pas de correspondance */
	}

	if (cmp == &abs_is_98)	/* Adresse égale ? */
	{
		for (i = 0; i < size; i++)	/* Parcours array */
			if (abs_is_98(*(array + i)))	/* si la valeur du tableau à l'index i = 98 */
				return (i);	/* Renvoie l'index i si la valeur est trouvée */
		return (-1);	/* Renvoie moins si pas de correspondance */
	}
	return (-1); /* La fonction ne renvoie pas 0 */
}
