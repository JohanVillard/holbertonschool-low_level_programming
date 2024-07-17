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
	const char *ptr_format = format;	/* ptr constant */

	if (format == NULL)
		return;

	va_start(datas, format);	/* Initialisation */
	while (*ptr_format != '\0')	/* Parcourt format */
	{
		spe = *ptr_format;	/* Lettre pointée actuellement de format vers spe */
		switch (spe)
		{
			case 's':	/* Affiche string */
				t_string = va_arg(datas, char *);
				if (t_string == NULL)	/* Si la string est NULL */
				{
					printf("(nil)");	/* Affiche (nil) */
					break;	/* Sort de la boucle */
				}
				printf("%s", t_string);
				break;
			case 'i':	/* Affiche integer */
				printf("%i", va_arg(datas, int));
				break;
			case 'f':	/* Affiche float */
					printf("%f", va_arg(datas, double));
				break;
			case 'c':	/* Affiche char */
				printf("%c", va_arg(datas, int));
				break;
			default:
				break;
		}
		if ((*(ptr_format + 1) != '\0') &&
		(spe == 's' || spe == 'i' || spe == 'f' || spe == 'c'))
			printf(", ");
		ptr_format++;	/* Déplace le pointeur à l'adresse suivante */
	}
	va_end(datas);	/* On a fini d'utiliser datas */
	printf("\n");
}
