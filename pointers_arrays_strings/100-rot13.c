#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode in rot13
 * @str: array to encode
 *
 * Return: modified array
 */
char *rot13(char *str)
{
	int i = 0, j;
	char code[2][52] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
	     {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'}};

	while (str[i] != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == code[0][j])
			{
				str[i] = code[1][j];
				break;
			}
		}
		i++;
	}
	return (str);
}
