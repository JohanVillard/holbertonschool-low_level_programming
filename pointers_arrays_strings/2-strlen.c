#include "main.h"

/**
 * _strlen - return length of string
 * @s: first value
 *
 * Return: number of string(int)
 */
int _strlen(char *s)
{
	int i = 0;
	char *array = s;

	while (array[i] != '\0')
	{
		i++;
	}

	return (i);
}
