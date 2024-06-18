#include "main.h"

/**
 * times_table - print times table
 *
 * Description: Display ten lines column * line
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int n;
	int result;
	int first_num;
	int second_num;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (n = 1; n < 10; n++)
		{
			result = i * n;
			first_num = (result / 10) % 10;
			second_num = result % 10;

			if (first_num == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + first_num);
			}

			_putchar('0' + second_num);

			if (n == 9)
			{
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}

