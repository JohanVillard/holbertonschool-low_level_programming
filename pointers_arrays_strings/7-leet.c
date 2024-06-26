#include "main.h"
#include <stdio.h>

/**
 * leet - encode 1337
 * @str: array to encode
 *
 * Return: modified array
 */
char *leet(char *str)
{
	int i, count, tmp[1000];
	
	while(str[count])
	{
		count++;
	}

	for (i = 0; i < count - 1; i++)
	{	
		if ((str[i] == 'a') || (str[i] == 'A'))
		{
			str[i] = '4';
		}
		else if ((str[i] == 'e') || (str[i] == 'E'))
		{
			str[i] = '3';
		}
		else if ((tmp[i] == 'o') || (str[i] == 'O'))
		{
			str[i] = '0';
		}
		else if ((str[i] == 't') || (str[i] == 'T'))
		{
			str[i] = '7';
		}
		else if ((str[i] == 'l') || (str[i] == 'L'))
		{
			str[i] = '1';
		}
	}
	return (str);
}
