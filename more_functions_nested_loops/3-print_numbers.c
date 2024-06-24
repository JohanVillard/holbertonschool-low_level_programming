#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: 1 for digit, 0 for non-digit
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
