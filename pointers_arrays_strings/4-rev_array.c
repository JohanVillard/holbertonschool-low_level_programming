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

	if (n >= 0)
	{
		for (i = n-1; i >= 0; i--)
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
		if (a[0] == 0)
		{
			printf("%d", a[0]);
		}
	}
	putchar('\n');
}
