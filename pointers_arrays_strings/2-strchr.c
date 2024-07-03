#include "main.h"

int _strlen(char *s);

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
	return (NULL);
}
