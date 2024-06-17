#include "main.h"

/**
 * _isalpha - check if letter
 * @c: char to input for check
 *
 * Description: Check lower and uppercase letter
 *
 * Return: 1 for letter and 0 for other
 */
int _isalpha(int c)
{
	int r;

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
