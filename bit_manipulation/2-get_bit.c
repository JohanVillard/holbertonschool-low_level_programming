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
	int *binary_num;
	unsigned int cut_count = 0;

	binary_num = malloc(sizeof(unsigned int) * index + 1);
	if (binary_num == NULL)
		return (-1);

	/*  Cut the number until the index is reached  */
	while (cut_count != index + 1)
	{
		/* Each bit of n is ANDed with the corresponding bit of 1 */
		*binary_num = n & 1;	/* Store a 1 or 0 after comparaison */
		n = n >> 1;		/* Cut the last digit */
		cut_count++;

		/*  Stop incrementing to obtain the desired value */
		if (cut_count != index + 1)
			binary_num++;
	}

	return (*binary_num);	/* If equal 1, if not 0 */
}
