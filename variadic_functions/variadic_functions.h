#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

/**
 * struct specifier - Parse format specifier
 *
 * @spec: specifier
 * @f: point function to print
 */
typedef struct specifier
{
	char *spec;					/* Stocke les choix dans une structure */
	void (*f)(va_list datas);	/* Chaque spécifier à sa fonc correspondante */
} specifier;

int _putchar(char c);

/* P1T0 */
int sum_them_all(const unsigned int n, ...);

/* P1T1 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* P1T2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* P1T3 */
void print_all(const char * const format, ...);
void print_string(va_list datas);
void print_int(va_list datas);
void print_float(va_list datas);
void print_char(va_list datas);
void end(va_list datas);

#endif /* VARIADIC_FUNCTIONS */
