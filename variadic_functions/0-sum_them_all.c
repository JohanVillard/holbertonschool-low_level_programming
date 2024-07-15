#include <stdarg.h>

/**
 * sum_them_all - Summ all parameters
 * @n: First number
 *
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;	/* Déclare un pointeur d'argument */
	unsigned int i, sum = 0;	/* Compteur et somme */

	if (n == 0)	/* Si n == 0 alors renvoie 0 */
		return (0);

	va_start(nums, n); /* Initialise nums pour qu'elle pointe */
					/* vers le premier argument optionnel */
					/* n étant le param nommé précédant le premier param variable*/

	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);	/* Renvoie les arguments successivement */
										/* de nums de type spécifié dans l'appel */

	va_end(nums);	/* Met fin à l'utilisation de nums */

	return (sum + n);
}
