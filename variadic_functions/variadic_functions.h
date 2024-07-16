#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/* struct P1T3 */
/**
 * struct specifier - Struct specifier
 *
 * @spe: The specifier
 * @format: Format set by specifier
 */
typedef struct specifier
{
	char *spe;
	char *format;
} spe_t;

int _putchar(char c);

/* P1T0 */
int sum_them_all(const unsigned int n, ...);

/* P1T1 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* P1T2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* P1T3 */
void print_all(const char * const format, ...);
void print_string(char *t_string);
void print_int(int t_int);
void print_float(int t_float);
void print_char(int t_char);

#endif /* VARIADIC_FUNCTIONS */