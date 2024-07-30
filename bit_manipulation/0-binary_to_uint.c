#include "main.h"

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
	unsigned int decimal_number = 0;

	if (b == NULL)
		return (0);

	while (*b)	/* Crosses the chain b */
	{
		if (*b < '0' || *b > '1')	/* The number is base 2 */
			return (0);
		/* decimal_number << 1 is equivalent to multiplying by 2 */
		/* That means Shifting Bits Left is multiplying by 2 */
		/* '|' add the 2 operands in binary */
		/* *b extract the actual binary digit */
		/* =The result is good, it's magic */
		decimal_number = (decimal_number << 1) | (*b - '0');
		b++;
	}


	return (decimal_number);
}

