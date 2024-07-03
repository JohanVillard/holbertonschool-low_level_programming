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
	int i = 0;

	while (_strchr(accept, s[i]) == 0)
	{
		i++;
	}
	if (s == 0)
	{
		return (0);
	}
	else
	{
		return (s + i);
	}
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
	while (*s)
	{
		if (*s == c)
		{
			return  (s);
		}
		s++;
	}
	return (0);
}