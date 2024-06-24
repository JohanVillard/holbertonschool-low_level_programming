#include "main.h"

/**
 * print_line - print a line of _
 * @n: number of _
 *
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
