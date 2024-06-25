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
		else if (s[index] == '-')
		{
			signe *= -1;
		}
		else if ((s[index] >= '0') && (s[index] <= '9'))
		{
			if ((num == 214748364) && (s[index] == '8'))
			{
				num *= -1;
				num = num * 10 + (s[index] - '0') * -1;
			}
			else
			{
				num = num * 10 + (s[index] - '0');
			}

		}
		index++;
	}
	if (num != -2147483648)
	{
		num *= signe;
	}
	return (num);
}
