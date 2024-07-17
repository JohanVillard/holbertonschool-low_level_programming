#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - with separator between them
 * @format: to print
 *
 * Return: (Nothing)
 */
void print_all(const char * const format, ...)
{
	va_list datas;	/* Déclare un pointeur d'argument */
	char spe, *t_string;	/* Spécificateur à imprimer, Stock string arg*/
	const char *ptr_format = format, *first_pos = format;	/* ptr constant */

	va_start(datas, format);	/* Initialisation */
	while (*ptr_format != '\0')	/* Parcourt format */
	{
		spe = *ptr_format;	/* Attribue la lettre pointée actuellement vers format */
		if (((ptr_format != first_pos) && (*(ptr_format + 1) != '\0')) &&
		(spe == 's' || spe == 'i' || spe == 'f' || spe == 'c'))
			printf(", ");

		switch (spe)
		{
			case 's':	/* Print string */
				t_string = va_arg(datas, char *);
				if (t_string == NULL)	/* Si la string est NULL */
				{
					printf("(nil)");	/* Affiche (nil) */
					break;	/* Sort de la boucle */
				}
				printf("%s", t_string);
				break;
			case 'i':	/* Print integer */
				printf("%i", va_arg(datas, int));
				break;
			case 'f':	/* Print float */
					printf("%f", va_arg(datas, double));
				break;
			case 'c':	/* Print char */
				printf("%c", va_arg(datas, int));
				break;
			default:
				break;
		}
		ptr_format++;	/* déplace le pointeur à l'adresse suivante */
	}
	va_end(datas);	/* On a fini d'utiliser datas */
	printf("\n");
}
