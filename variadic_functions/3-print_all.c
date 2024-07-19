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
	char spe, *separator = "";					/* Spécificateur de format, séparateur */
	const char *ptr_format = format;			/* Car format est un pointeur constant */
	int i = 0;									/* Compteur de la 2ème boucle */
	specifier specifiers[] = {					/* Stocke les formats dans une structure */
		{"s", print_string},					/* 1 Spécificateur = 1 fonction */
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{NULL, NULL}							/* Indique la fin de la structure */
	};

	va_start(datas, format);					/* Initialisation */
	while (ptr_format != NULL && *ptr_format != '\0')	/* Ptr parcourt format */
	{
		spe = *ptr_format;						/* spe pointe vers char actuel de format */

		while (specifiers[i].spec != NULL)		/* Tant la val.spec != NULL*/
		{
			if (spe == *(specifiers[i].spec))	/* Check spécificateur */
			{
				printf("%s", separator);		/* Premier affichage sans virgule */
				specifiers[i].f(datas);			/* Appel la fonction correspondante */
				separator = ", ";				/* !!!Affichage virgule avant le mot!!! */
			}
			i++;
		}
		i = 0;									/* Reset du compteur sinon la boucle ne se relance pas */

		ptr_format++;							/* Place le pointeur à l'adresse suivante */
	}
	va_end(datas);								/* Fin d'utilisation de datas */

	printf("\n");								/* Retour à la ligne */
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
	printf("%f", va_arg(datas, double));		/* Promotion en double */
}

/**
 * print_char - Print char
 * @datas: of va_list
 *
 * Return: (Nothing)
 */
void print_char(va_list datas)
{
	printf("%c", va_arg(datas, int));			/* Promotion en int */
}
