#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: pointer of function
 * Return: (nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == &print_name_as_is)	/* Si l'ad de f = à l'ad de print_name_as_is */
	{
		print_name_as_is(name);
	}
	else if (f == &print_name_uppercase)	/* Si ad de f = ad print_name_uppercas */
	{
		print_name_uppercase(name);
	}
}
