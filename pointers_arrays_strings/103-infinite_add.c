#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add big number
 * @n1: first array num
 * @n2: second array num
 * @r: result array
 * @size_r: size of resulte array
 * 
 * Return: result array
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = 0;
	int n2_len = 0;
	int i, j, k, num_r, sum_r, carry = 0;

	while (n1[n1_len])
	{
		n1_len++;
	}

	while (n2[n2_len])
	{
		n2_len++;
	}

	n1_len--;
	n2_len--;

	for (i = n1_len, j = n2_len, k = size_r; i > 0; i--, j--, k--)
	{
		num_r = (n1[i] - '0') + (n2[i] - '0') + carry;
		sum_r = num_r % 10;
		carry = num_r / 10;
		r[k] = sum_r;
	}
	
	printf("RESULT: %s\n", r);

	return (r);
}
