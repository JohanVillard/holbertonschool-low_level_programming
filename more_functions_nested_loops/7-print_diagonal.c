#include "main.h"

/**
 * print_diagonal - print a line in diagonal of _
 * @n: number of _
 *
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');

			if (i < n)
			{
				for (j = 0; j < i ; j++)
				{
					_putchar(' ');
				}
			}

			i++;
		}
	}
}
