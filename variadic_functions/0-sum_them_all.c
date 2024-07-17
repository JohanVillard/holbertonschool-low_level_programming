#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: Total number
 * @...: Elipsis
 *
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list term;						/* Déclare un pointeur d'argument */
	unsigned int i = 0;					/* Compteur */
	int sum = 0;						/* Somme */

	if (n != 0)							/* Sort du code si n = 0 */
	{
		va_start(term, n);				/* Init le pointeur */
		for (i = 0; i < n; i++)
			sum += va_arg(term, int);	/* Change d'occurrence à chaque appel */
		va_end(term);					/* Met fin à l'utilisation de term */

		return (sum);
	}

	return (0);
}
