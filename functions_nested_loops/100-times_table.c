#include "main.h"

/**
 * print_times_table - print times table n times
 *
 * Description: Display ten lines column * line n times
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int result;
	int first_num;
	int second_num;

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');

			for (j = 1; j < n; j++)
			{
				result = i * j;
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

				if (j == 9)
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
}
