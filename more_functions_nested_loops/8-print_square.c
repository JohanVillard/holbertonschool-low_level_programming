#include "main.h"

/**
 * print_square - print a square of #
 * @size: size of square
 *
 */
void print_square(int size)
{
	int i = 1, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < size)
		{
			while (i <= size)
			{
				_putchar('#');
				i++;
			}

			i = 1;
			_putchar('\n');
			j++;
		}
	}
}
