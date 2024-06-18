#include "main.h"

/**
 * _abs - Compute the absolute value of a number
 * @n: number to input for check
 *
 * Description: Check, compute et display the absolute value of the number
 *
 * Return: absolute value of the number
 */
int _abs(int n)
{
	int r = 0;

	if (n > 0)
	{
		r = n;
	}
	else if (n == 0)
	{
		r = n;
	}
	else
	{
		r = (n * -1);
	}

	return (r);
}
