#include "main.h"

/**
 * print_times_table - print times table n time
 * @n: integer times tables
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int column, line, result;
	int first_num, second_num, last_num;

	if  ((n <= 15) && (n >= 0))
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('0');
			if (n != 0)
			{	_putchar(',');
				_putchar(' '); }
			for (column = 1; column <= n; column++)
			{
				result = line * column;
				first_num = result / 100;
				second_num = (result / 10) % 10;
				last_num = result % 10;
				if ((first_num == 0) && (second_num == 0))
				{	_putchar(' ');
					_putchar(' '); }
				else if (first_num == 0)
				{
					_putchar(' ');
					_putchar('0' + second_num);
				}
				else
				{
					_putchar('0' + first_num);
					_putchar('0' + second_num);
				}
				_putchar('0' + last_num);
				if (column != n)
				{	_putchar(',');
					_putchar(' '); }
			}
		_putchar('\n');
		}
	}
}
