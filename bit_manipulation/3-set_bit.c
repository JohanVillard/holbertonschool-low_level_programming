#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long int where is the bit.
 * @index: where the value we search is.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is out of range for an unsigned long int */
	/* Index can't depass 64 bits */
	/* Determine the number of bits for unsigned long int */
	/* Size of the type * a byte(= 8bits)*/
	if (index > sizeof(n) * 8)
		return (-1);

	/* (1 << index) is called a mask */
	/* Create a binary number */
	/* Put a 1 at the index where the bit is*/
	/* Other are 0 */
	mask = 1 << index;

	/* Add mask to n */
	/* Add the binary number where a 1 is placed at the index */
	*n = *n | mask;
	return (1);


	return (-1);
}
