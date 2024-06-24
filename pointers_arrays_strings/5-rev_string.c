#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: array of char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int char_count = 0, j = 0, k = 0;
	char temp[1000];

	while (s[char_count])
	{
		char_count++;
	}

	for (j = char_count - 1; j >= 0; j--)
	{
		temp[k] = s[j];
		k++;
	}

	for (j = 0; j <= char_count - 1; j++)
	{
		s[j] = temp[j];
	}

}
