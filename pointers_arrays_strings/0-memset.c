#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: string to change
 * @b: constant to put in string
 * @n: number of memory cells to fill
 *
 * Return: the edited string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
