#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums 2 diags in square matrix
 * @a: array pointing double array
 * @size: size of the matrix
 *
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, jump = 0;

	for (i = 0 ; i < size; i++)
	{
		sum += *(a + jump);
		jump += size + 1;
	}

	printf("%d, ", sum);

	sum = 0;
	jump = size - 1;

	for (i = 0 ; i < size; i++)
	{
		sum += *(a + jump);
		jump += size - 1;
	}

	printf("%d\n", sum);

}
