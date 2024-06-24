#include "main.h"

/**
 * print_triangle - print a tringle of #
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i = 1, j = 0, k, l = 1, space_size = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (j < size)
	{
	space_size =  size - l;
		for (k = 0; k < space_size; k++)
		{
			_putchar(' ');
		}
		while (i <= size - space_size)
		{
			_putchar('#');
			i++;
		}
		i = 1;
		_putchar('\n');
		j++;
		l++;
	}
	}
}
