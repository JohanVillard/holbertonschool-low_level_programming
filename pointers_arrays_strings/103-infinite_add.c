#include <stdio.h>

/**
 * infinite_add - add big number
 * @n1: first array num
 * @n2: second array num
 * @r: result array
 * @size_r: size of resulte array
 *
 *
 * Return: result array
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = 0;
	int n2_len = 0;
	int tmp_len = 0;
	int r_len = 0;
	int i, j, k, add_r = 0, sum_r = 0, carry = 0;
	char tmp[1000] = {0};

	while (n1[n1_len])
	{
		n1_len++;
	}
	while (n2[n2_len])
	{
		n2_len++;
	}
	if (size_r <= n1_len || size_r <= n2_len)
	{
		return (0);
	}
	n1_len--;
	n2_len--;
	for (i = n1_len, j = n2_len, k = 0; i >= 0 || j >= 0 || carry > 0; i--, j--, k++)
	{
		add_r = carry;
		if (i >= 0)
		{
			add_r += n1[i] - '0';
		}
		if (j >= 0)
		{
			add_r += n2[j] - '0';
		}
		sum_r = add_r % 10;
		carry = add_r / 10;
		tmp[k] = sum_r + '0';
	}
	tmp[k] = '\0';
	while (tmp[tmp_len])
	{
		tmp_len++;
	}
	for (i = 0; i < tmp_len; i++)
	{
		r[i] = tmp[tmp_len - i - 1];
	}
	r[i] = '\0';
	while (r[r_len])
	{
		r_len++;
	}
	if (size_r <= r_len)
	{
		return (0);
	}
	return (r);
}
