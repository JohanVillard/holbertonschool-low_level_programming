#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

int _putchar(char c);

#include <stdarg.h>

/* P1T0 */
int sum_them_all(const unsigned int n, ...);

/* P1T1 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* P1T2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* P1T3 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */