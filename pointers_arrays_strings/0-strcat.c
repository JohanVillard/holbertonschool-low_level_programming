#include "main.h"

/**
 * _strcat - concat 2 strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer of resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j + 1] = '\0';

	return (dest);
}
