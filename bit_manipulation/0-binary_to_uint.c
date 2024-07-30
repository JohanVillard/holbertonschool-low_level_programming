#include "main.h"

unsigned int _pow_recursion(unsigned int x, unsigned int y);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String which binary is stored
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_num = 0, decimal_number = 0, binary_length = 0, i;

	if (b == NULL)
		return (0);

	while (*b)	/* Crosses the chain b */
	{
		if (*b < '0' || *b > '1')	/* The number is base 2 */
			return (0);
		binary_num = 10 * binary_num + (*b - '0');	/* Convert in unsugned int */
		b++;	/* Move 1 character */
		binary_length++;	/* Size of the binary number */
	}

	for (i = 0; i < binary_length; i++)
	{
		/* Add the product if the last binary digit is not 0 */
		decimal_number += _pow_recursion(2, i) * (binary_num % 10);
		binary_num /= 10;	/* Cut the number */
	}

	return (decimal_number);
}

/**
* _pow_recursion - return v power y
* @x: unsigned int base
* @y: unsigned int exponent
*
* Return: exponentiation
*/
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y == 0 && x == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
