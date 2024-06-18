#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number to input for check
 *
 * Description: Check, compute et display the last digit of the number
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n % 10) * -1;
	}
	else
	{
		r =  (n % 10);
	}

	_putchar(r + '0');

	return (r);
}
