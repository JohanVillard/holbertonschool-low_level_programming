#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: unsigned long integer to convert
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	char binary_digit;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		binary_digit = (n & 1) + '0';	/* If equal 1, if not 0 */

		_putchar(binary_digit);	/* Print digit */

		n = n >> 1;	/* Cut the last digit */
	}
}
