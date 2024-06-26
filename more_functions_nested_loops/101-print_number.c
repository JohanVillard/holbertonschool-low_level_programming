#include "main.h"

/**
 * print_number - print nulber with putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int first_num;
	int other_num = 0;
	int last_num;
	int comma = 1000;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	first_num = n / comma;
	last_num = n % 10;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	while (first_num == 0)
	{
		comma /= 10;
		first_num = n / comma;
	}

	_putchar(first_num + '0');

	comma /= 10;

	while (comma != 1)
	{
		other_num = (n / comma) % 10;
		_putchar(other_num + '0');
		comma /= 10;
	}

	_putchar(last_num + '0');
	}
}
