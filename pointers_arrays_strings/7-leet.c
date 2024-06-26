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
	int i = 0, j;
	char code[2][10] = {{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
		{'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code[0][j])
			{
				str[i] = code[1][j];
			}
		}
		i++;
	}
	return (str);
}
