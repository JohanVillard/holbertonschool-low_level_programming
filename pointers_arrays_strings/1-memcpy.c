 #include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: string to change
 * @src: string to copy
 * @n: number of cells to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char tmp;

	for (i = 0; i < n; i++)
	{
		tmp = src[i];
		dest[i] = tmp;
	}
	return (dest);
}
