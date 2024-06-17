#include "main.h"

/**
 * _islower - check lowercase
 * @c: char to input for check
 *
 * Return: 1 for lowercase and 2 for uppercase
 */
int _islower(int c)
{
	int r;

	if ((c >= 97) && (c <= 122))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
