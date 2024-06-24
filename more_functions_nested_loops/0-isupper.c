#include "main.h"

/**
 * _isupper - check uppercase
 * @c: char to check
 *
 * Return: 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}

	return (0);
}
