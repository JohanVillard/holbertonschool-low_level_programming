#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of integer
 * @a: array to reverse
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp[1000], i, j = 1;

	for (i = 0; i < n; i++)
	{
		tmp[i] = *(a + n - j);
		j++;
	}

	for (i = 0; i < n; i++)
	{
		*a = tmp[i];
		a++;
	}
}
