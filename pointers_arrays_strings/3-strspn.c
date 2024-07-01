#include "main.h"

char *_strchr(char *s, char c);

/**
 * _strspn - count the number of first char in a string that match with a key
 * @s: key
 * @accept: char to search from string
 *
 * Return: number of match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (_strchr(accept, s[i]))
	{
		i++;
	}
	return (i);
}

/**
 * _strchr - return a pointer on the first occurence of the specified char
 * @s: search string
 * @c: char to search
 *
 * Return: pointer of resulting string dest
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] !=  '\0')
	{
		if (s[i] == c)
		{
			return  (s + i);
		}
		i++;
	}
	return (0);
}
