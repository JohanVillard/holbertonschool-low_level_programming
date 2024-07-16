#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - with separator between them
 * @separator: to put between number
 * @n: Number of numbers
 *
 * Return: (Nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;	/* Déclare un pointeur d'argument */

	if (separator == NULL)	/* N'affiche rien si NULL */
		return;

	va_start(nums, n);	/* Initialisation */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));	/* Passe d'arg en arg */
		if (i != n - 1)	/* N'affiche pas à la dernière occurence */
			printf("%s", separator);
	}

	va_end(nums);	/* On a fini d'utiliser nums */

	printf("\n");
}
