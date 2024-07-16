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
	spe_t spes[] = {	/* Stocke les choix dans une structure */
	{"s", "%s"},	/* Chaque spé à sa fonction correspondante */
	{"i", "%d"},
	{"f", "%f"},
	{"c", "%c"},
	{NULL, NULL} };	/* Indique la fin de la structure */
	int i = 0; /* Compteur */
	char spe, *t_string;	/* Spécificateur à imprimer, Stock string arg*/
	const char *prt_format = format;	/* prt_format constant*** */

	va_start(datas, format);	/* Initialisation */
	while (*prt_format != '\0')	/* Parcourt format */
	{
		spe = *prt_format;	/* Attribue la lettre pointée actuellement vers format */
		while (spes[i].spe != NULL) /* Tant la val de l'op dans la struc != NULL*/
		{
			if (spe == *(spes + i)->spe)	/* spe correspond à ceux dans spes[] */
			{
				switch (spe)
				{
					case 's':	/* Print string */
						t_string = va_arg(datas, char *);

						if (t_string == NULL)
								printf("(nil)");

						printf((spes + i)->format, t_string);
						break;
					case 'i':	/* Print integer */
						printf((spes + i)->format, va_arg(datas, int));
						break;
					case 'f':	/* Print float */
						printf((spes + i)->format, va_arg(datas, double));
						break;
					case 'c':	/* Print char */
						printf((spes + i)->format, va_arg(datas, int));
						break;
				}
				if (*(prt_format + 1) != '\0')	/* Si le caractère suivant */
				printf(", ");	/* n' est pas la dernière occurence*/
			}
			i++;
		}
		i = 0; /* Reset le compteur de la structure */
		prt_format++;	/* déplace le pointeur à l'adresse suivante */
	}
	va_end(datas);	/* On a fini d'utiliser datas */
	printf("\n");
}

/**** pour accéder au membre de format */
