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
	int second_num;
	int third_num;
	int last_num;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	first_num = n / 1000;
	second_num = (n / 100) % 10;
	third_num = (n / 10) % 10;
	last_num = n % 10;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	if (first_num != 0)
	{
		_putchar(first_num + '0');
	}

	if (first_num != 0 || second_num != 0)
	{
		_putchar(second_num + '0');
	}

	if (third_num != 0 || first_num != 0 || second_num != 0)
	{
		_putchar(third_num + '0');
	}

	_putchar(last_num + '0');
	}
}
