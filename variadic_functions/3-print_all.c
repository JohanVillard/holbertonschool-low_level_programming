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
	int count_spe = 0;	/* Compteur de spécificateur de format */

	va_start(datas, format);	/* Initialisation */
	while (*prt_format != '\0')	/* Parcourt format */
	{
		spe = *prt_format;	/* Attribue la lettre pointée actuellement vers format */
		if ((count_spe != 0) && (spe == 's' || spe == 'i'
		|| spe == 'f' || spe == 'c'))	/* Si le caractère suivant */
			printf(", ");	/* n est pas la dernière occurence*/
		switch (spe)	/* Pour la valeur de spe */
		{
			case 's':	/* Print string */
				count_spe++;	/* Compte le nombre de spe valide */
				t_string = va_arg(datas, char *);
				if (t_string == NULL)	/* Si la string est NULL */
				{
					printf("(nil)");	/* Affiche (nil) */
					break;	/* Sort de la boucle */
				}
				printf("%s", t_string);
				break;
			case 'i':	/* Print integer */
				count_spe++;	/* Compte le nombre de spe valide */
				printf("%i", va_arg(datas, int));
				break;
			case 'f':	/* Print float */
				count_spe++;	/* Compte le nombre de spe valide */
				printf("%f", va_arg(datas, double));
				break;
			case 'c':	/* Print char */
				count_spe++;	/* Compte le nombre de spe valide */
				printf("%c", va_arg(datas, int));
				break;
			default:
				count_spe++;	/* Compte le nombre de spe valide */
				break;
		}
		prt_format++;	/* déplace le pointeur à l'adresse suivante */
	}
	va_end(datas);	/* On a fini d'utiliser datas */
	printf("\n");
}

/**** pour accéder au membre de format */
