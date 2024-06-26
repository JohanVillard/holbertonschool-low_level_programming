#include "main.h"
#include <stdio.h>

/**
 * cap_string - change to uppercase if special char
 * @str: array to cheack
 *
 * Return: modified array
 */
char *cap_string(char *str)
{
	int count = 0, i, tmp[1000];

	while (str[count])
	{
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t'
				|| str[i - 1] == '\n' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?'
				|| str[i - 1] == '(' || str[i - 1] == ')'
				|| str[i - 1] == '{' || str[i - 1] == '}')
			&& ((str[i] >= 97) && (str[i] <= 122)))
		{
			tmp[i] = str[i] - 32;
		}
		else if ((i == 0) && ((str[i] >= 97) && (str[i] <= 122)))

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
