#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: Total number
 * @...: Ellipsis
 *
 * Return: (Sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list term;	/* Declare un pointeur d'argument */
	unsigned int i = 0;	/* Compteur */
	int sum = 0;	/* Somme */

	if (n == 0)	/* Sort du code si n = 0 */
		return (0);

	va_start(term, n);	/* Init le pointeur */
	for (i = 0; i < n; i++)
		sum += va_arg(term, int);	/* Change d'occurrence a chaque appel */
	va_end(term);	/* Met fin a l'utilisation de term */

	return (sum);
}

