#include "main.h"

/**
 * print_sign - check the number's sign
 * @n: number to input for check
 *
 * Description: Check et display the sign of the number
 *
 * Return: 1 for +, 0 for 0 and -1 for -
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
