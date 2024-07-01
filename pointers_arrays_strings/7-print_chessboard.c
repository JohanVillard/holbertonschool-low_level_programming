#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - all in the title
 * @a: first element of line array
 * @: 8 columns
 *
 * Return: (0)
 */
void print_chessboard(char (*a)[8])
{
	int line, column;
	int array_size = sizeof(a);

	for (line = 0; line < array_size; line++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[line][column]);
		}
		_putchar('\n');
	}
}
