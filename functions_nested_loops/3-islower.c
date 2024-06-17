#include "main.h"

/**
 * _islower - check lowercase
 * Check with ascii table
 * Parameters c - put the char to check
 * Return value - 1 for lowercase and 2 for uppercase
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
