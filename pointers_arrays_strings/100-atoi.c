#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int num, index, signe;

	signe = 1;
	index = 0;
	num = 0;
	while (s[index])
	{
		if (num != 0 && s[index] == ' ')
		{
			break;
		}
		else if ((s[index] == '-') && (s[index + 1] >= '0') && (s[index + 1] <= '9'))
		{
			signe *= -1;
		}
		else if ((s[index] >= '0') && (s[index] <= '9'))
		{
			num = num * 10 + (s[index] - '0');
		}
		index++;
	}

	num *= signe;

	return (num);
}
