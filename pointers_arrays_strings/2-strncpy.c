#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: bytes copied
 *
 * Return: pointer of resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
