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
	va_list nums;		/* Déclare un pointeur d'argument */
	int sum = 0;		/* Somme */

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);	/* Renvoie les arguments successivement */
									/* de nums de type spécifié dans l'appel */

	va_end(nums);		/* Met fin à l'utilisation de nums */

	return (sum);
}
