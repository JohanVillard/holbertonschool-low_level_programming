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
	int  i;

	for (i = n; i > 0; i--)
	{
		if (a[i] == '\0')
		{
		}
		else
		{
			printf("%d", a[i]);
		}

		if ((i == 0) || (a[i] == '\0'))
		{
		}
		else
		{
			printf(", ");
		}
	}
	printf("%d", a[0]);
	putchar('\n');
}
