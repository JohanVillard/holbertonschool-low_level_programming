#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void choose_format_print(char *spe, va_list datas);

/**
 * print_all - with separator between them
 * @format: to print
 *
 * Return: (Nothing)
 */
void print_all(const char * const format, ...)
{
	va_list datas;										/* Déclare un pointeur d'argument */
	char spe;											/* Spécificateur de format */
	const char *ptr_format = format;					/* Ptr constant vers format */

	va_start(datas, format);							/* Initialisation */
	while (*ptr_format != '\0')							/* Ptr parcourt format */
	{
		spe = *ptr_format;								/* spe pointe vers char actuel de format */

	choose_format_print(&spe, datas);

		if ((*(ptr_format + 1) != '\0') &&				/* Virgule ou pas... */
		(spe == 's' || spe == 'i' || spe == 'f' || spe == 'c'))
			printf(", ");

		ptr_format++;									/* Place le pointeur à l'adresse suivante */
	}
	va_end(datas);										/* Fin d'utilisation de datas */
	printf("\n");
}
/**
 * choose_format_print - Choose specifier
 * @spe: specifier
 * @datas: ellipsis
 *
 * Return: (Specifier)
 */
void choose_format_print(char *spe, va_list datas)
{
	char *t_string;
										/* Stocke va_arg si il est une string */
	switch (*spe)									/* Si spe est égale */
	{
		case 's':									/* s: affiche string */
			t_string = va_arg(datas, char *);
			if (t_string == NULL)					/* Si la string est NULL */
			{
			printf("(nil)");						/* Affiche (nil) */
				break;
			}
			printf("%s", t_string);
			break;
		case 'i':									/* i: affiche integer */
			printf("%i", va_arg(datas, int));
			break;
		case 'f':									/* f: affiche float */
			printf("%f", va_arg(datas, double));	/* Promotion: float vers double */
			break;
		case 'c':									/* c: affiche char */
			printf("%c", va_arg(datas, int));		/* Promotion: char vers int */
			break;
		default:
			break;
	}

}
