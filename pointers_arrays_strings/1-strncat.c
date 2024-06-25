#include "main.h"
#include <stdlib.h>

/**
 * _strncat - concat 2 strings with n bytes
 * @dest: first string
 * @src: second string
 * @n: bytes reserved
 *
 * Return: pointer of resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
