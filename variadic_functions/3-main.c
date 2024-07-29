#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all(", ", 'B', 3, "stSchool");
	print_all(NULL);
	return (0);
}
