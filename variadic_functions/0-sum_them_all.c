#include <stdarg.h>

/**
 * sum_them_all - Summ all parameters
 * @n: Total number
 *
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;	/* Compteur */
	int sum = 0;		/* Somme */
	va_list nums;		/* Déclare un pointeur d'argument */

	va_start(nums, n);	/* Initialise nums pour qu'elle pointe */
						/* vers le premier argument optionnel */
						/* 'n' étant le param nommé précédant le premier param variable*/

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);	/* Renvoie les arguments successivement */
									/* de nums de type spécifié dans l'appel */

	va_end(nums);		/* Met fin à l'utilisation de nums */

	return (sum);
}
