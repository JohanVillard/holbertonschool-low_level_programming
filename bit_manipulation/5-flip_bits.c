#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: start unsigned long int.
 * @m: destination unsigned long int.
 *
 * Return: returns the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_num = 0;

	while ((n != 0) || (m != 0))	/* Stop when both numbers are < 0 */
	{
		if ((n & 1) != (m & 1))	/* Digits must be changed ? */
			flip_num++;

		n = n >> 1;	/* Cut the last digit of n */
		m = m >> 1;	/* Cut the last digit of m */
	}

	return (flip_num);
}
