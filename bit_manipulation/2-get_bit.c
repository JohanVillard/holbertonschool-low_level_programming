#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int where is the bit.
 * @index: where the value we search is.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int the_bit;

	if ((int)n < 0)	/* Cast into int to check if negative */
		return (-1);

	/* (1 << index) is called a mask */
	/* Create a binary number */
	/* Put a 1 at the index where the bit is*/
	/* Other are 0 */
	/* Compare with binary n */
	/* Return if non-zero:TRUE or O:FALSE */
	if (n & (1 << index))
	{
		the_bit = 1;
	}
	else
	{
		the_bit = 0;
	}

	return (the_bit);
}
