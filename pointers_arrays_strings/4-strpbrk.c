#include "main.h"

char *_strchr(char *s, char c);

/**
 * _strpbrk - locate the first occurence of char in key in a string
 * @s: key
 * @accept: char to search from string
 *
 * Return: pointer of locate char in string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (_strchr(accept, s[i]) == 0)
	{
		i++;
	}
	return (s + i);
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
