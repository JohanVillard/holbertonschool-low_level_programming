#include "main.h"

/**
 * _strlen - return length of string
 * @s: first value
 *
 * Return: number of string(int)
 */
int _strlen(char *s)
{
	char array[] = *s; 
	int i = 0;

	while (array[i])
	{
		i++;
	}

	return (i);
}
