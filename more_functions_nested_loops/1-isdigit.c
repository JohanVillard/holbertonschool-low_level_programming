#include "main.h"

/**
 * _isdigit - check digit
 * @c: char to check
 *
 * Return: 1 for digit, 0 for non-digit
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
