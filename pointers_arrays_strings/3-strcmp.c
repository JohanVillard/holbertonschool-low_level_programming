#include "main.h"
#include <stdlib.h>

/**
 * _strcmp - compare the first letter of 2 string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 for equal, plus for bigger than and minus for smaller than
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0, i;

	for (i = 0; i < s1[i]; i++)
	{
		result = s1[i] - s2[i];

		if (result != 0)
		{
			break;
		}
	}

	return (result);

}
