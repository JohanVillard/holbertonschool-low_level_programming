#include "main.h"

/**
 * print_number - print nulber with putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int first_num, other_num, last_num;
	int comma = 1;

	if (n == -2147483648)
	{	n = -2147483648 + 8;
		n *= -1;
		_putchar('-');
	}
	else if (n < 0)
	{	n *= -1;
		_putchar('-');
	}
	first_num = n;
	last_num = n % 10;
	if (n == 0)
	{	_putchar('0');
	}
	else
	{
		while (first_num >= 10)
		{	comma *= 10;
			first_num /= 10;
	}
	_putchar(first_num + '0');
	if (comma != 1)
	{	comma /= 10;
		while (comma != 1)
		{	other_num = (n / comma) % 10;
			_putchar(other_num + '0');
			comma /= 10;
		}
		if (n == 2147483640)
		{	_putchar('8');
		}
		else
		{	_putchar(last_num + '0');
		}
	}
	}
}
