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
	const char *prt_format = format;	/* prt_format constant*** */
	int count_valid_spe = 0;

	va_start(datas, format);	/* Initialisation */
	while (*prt_format != '\0')	/* Parcourt format */
	{
		spe = *prt_format;	/* Attribue la lettre pointée actuellement vers format */
		if ((count_valid_spe > 0) &&
		(spe == 's' || spe == 'i' || spe == 'f' || spe == 'c'))
			printf(", ");
		switch (spe)
		{
			case 's':	/* Print string */
				count_valid_spe++;
				t_string = va_arg(datas, char *);
				if (t_string == NULL)	/* Si la string est NULL */
				{
					printf("(nil)");	/* Affiche (nil) */
					break;	/* Sort de la boucle */
				}
				printf("%s", t_string);
				break;
			case 'i':	/* Print integer */
				count_valid_spe++;
				printf("%i", va_arg(datas, int));
				break;
			case 'f':	/* Print float */
				count_valid_spe++;
				printf("%f", va_arg(datas, double));
				break;
			case 'c':	/* Print char */
				count_valid_spe++;
				printf("%c", va_arg(datas, int));
				break;
			default:
				break;
		}
		prt_format++;	/* déplace le pointeur à l'adresse suivante */
	}
	va_end(datas);	/* On a fini d'utiliser datas */
	printf("\n");
}

/**** pour accéder au membre de format */
