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
	va_list datas;								/* Déclare un pointeur d'argument */
	char spe, *separator = "";					/* Spécificateur de format */
	const char *ptr_format = format;
	int i = 0;									/* Compteur */
	specifier specifiers[] = {					/* Stocke les choix dans une structure */
		{"s", print_string},					/* Chaque spécifier à sa fonct correspondante */
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{NULL, NULL}							/* Indique la fin de la structure */
	};											/* Ptr constant vers format */

	va_start(datas, format);					/* Initialisation */
	while (*ptr_format != '\0')					/* Ptr parcourt format */
	{
		spe = *ptr_format;						/* spe pointe vers char actuel de format */

		while (specifiers[i].spec != NULL)		/* Tant la val.spec != NULL*/
		{
			if (spe == *(specifiers[i].spec))	/* Check spécificateur */
			{
				printf("%s", separator);		/* Premier affichage sans virgule */
				(specifiers[i].f(datas));		/* Appel la fonction correspondante */
				separator = ", ";				/* Respecter sens affichage virgule */
			}
			i++;
		}
		i = 0;									/* Reset du compteur sinon la boucle ne se relance pas */

		ptr_format++;							/* Place le pointeur à l'adresse suivante */
	}
	va_end(datas);								/* Fin d'utilisation de datas */

	printf("\n");								/* Efface le carac de fin et la virgule */
}

/**
 * print_string - Print string
 * @datas: of va_list
 *
 * Return: (Nothing)
 */
void print_string(va_list datas)
{
	char *t_string;

	t_string = va_arg(datas, char *);
	if (t_string == NULL)						/* Si la string est NULL */
	{
		printf("(nil)");
		return;									/* Affiche (nil) */
	}
	printf("%s", t_string);						/* Stocke va_arg si il est une string */
}

/**
 * print_int - Print int
 * @datas: of va_list
 *
 * Return: (Nothing)
 */
void print_int(va_list datas)
{
	printf("%i", va_arg(datas, int));
}

/**
 * print_float - Print float
 * @datas: of va_list
 *
 * Return: (Nothing)
 */
void print_float(va_list datas)
{
	printf("%f", va_arg(datas, double));
}

/**
 * print_char - Print char
 * @datas: of va_list
 *
 * Return: (Nothing)
 */
void print_char(va_list datas)
{
	printf("%c", va_arg(datas, int));
}
