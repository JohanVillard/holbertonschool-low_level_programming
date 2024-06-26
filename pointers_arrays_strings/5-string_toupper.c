#include "main.h"
#include <stdio.h>

/**
 * string_toupper- change to uppercase
 * @str: array to cheack
 *
 * Return: modified array
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
