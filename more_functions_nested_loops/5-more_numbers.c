#include "main.h"

/**
 * more_numbers - print 0 to 14 without 2 an 4
 *
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (i = 48; i <= 52; i++)
		{
			_putchar('1');
			_putchar(i);
		}

		_putchar('\n');
	}
}
