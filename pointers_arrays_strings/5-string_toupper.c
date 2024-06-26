#include "main.h"
#include <stdio.h>

/**
 *  - reverse an array of integer
 * @a: array to reverse
 * @n: number of elements
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	int count = 0, i, tmp[1000];

	while (str[count])
	{
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			tmp[i] = str[i] - 32;
		}
		else
		{
			tmp[i] = str[i];
		}
	}

	for (i = 0; i <= count; i++)
	{
		str[i] = tmp[i];
	}

	return (str);
}
