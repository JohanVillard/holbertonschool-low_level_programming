#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long int where is the bit.
 * @index: where the value we search is.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
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
	/* Other are 1 */
	mask = 1 << index;

	/* If byte at the index is 1 */
	if (*n & mask)
	{
		*n = *n ^ mask;	/* Xor if same the equal to zero */
		return (1);
	}

	/* Byte at the index is equal to zero, the desired value */
	return (1);
}
