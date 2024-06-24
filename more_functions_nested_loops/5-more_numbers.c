#include "main.h"

/**
 * more_numbers - print 0 to 14 without 2 an 4
 *
 */
void more_numbers(void)
{
	int i, j, second_num, limit_num = 62;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= limit_num; i++)
		{
			second_num = i;
			if (i > 57)
			{
				_putchar('1');
				second_num -= 10;
			}
			_putchar(second_num);
		}
	_putchar('\n');
	}
}


