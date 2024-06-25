#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination array
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
