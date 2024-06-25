#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: array
 * @n: number of element to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
