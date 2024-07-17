#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sum all parameters
 * @n: Total number
 *
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;				/* Compteur */
	va_list args;					/* Déclare un pointeur d'argument */
	int sum = 0;					/* Somme */

	if (n == 0)						/* Sort du code si n = 0 */
		return (0);

	va_start(args, n);				/* Init le pointeur */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);	/* Change d'occurrence à chaque appel */
	va_end(args);					/* Met fin à l'utilisation de term */

	return (sum);
}
