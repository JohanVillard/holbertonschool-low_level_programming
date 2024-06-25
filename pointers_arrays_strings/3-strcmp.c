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
	int result = 0, i = 1;

	result = s1[0] - s2[0];

	while (result == 0)
	{
		result = s1[i] - s2[i];

		i++;
	}

	return (result);

}
