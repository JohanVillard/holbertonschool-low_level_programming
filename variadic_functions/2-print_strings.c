#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - with separator between them
 * @separator: to put between strings
 * @n: Number of strings
 *
 * Return: (Nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0; /* Compteur */
	va_list strings;	/* Déclare un pointeur d'argument */

	va_start(strings, n);	/* Initialisation */

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));
		if (i != n - 1  && separator != NULL)	/* Ne s'affiche pas */
			printf("%s", separator);	/* à la dernière occurence et si NULL */
	}

	va_end(strings);	/* On a fini d'utiliser strings */

	printf("\n");
}
