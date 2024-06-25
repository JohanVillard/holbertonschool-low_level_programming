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
	int count = 0, array_len = 0;

	while (a[array_len])
	{
		array_len++;
	}

	for (count = 0; count < n; count++)
	{
		if (count >= array_len - 1)
		{
			printf("%d\n count: %d    array_len: %d", a[count], count, array_len - 1);
		}
		else
		{
			printf("%d, ", a[count]);
		}
	}
	putchar('\n');
}
