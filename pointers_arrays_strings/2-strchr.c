#include "main.h"
#include <stdio.h>

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
	int i, find_char = 0, i_tmp, str_len;
	char tmp[1000], **ptr = &s;

	str_len = _strlen(s);

	for (i = 0; i < str_len; i++)
	{
		if (s[i] == c)
		{
			find_char = 1;
			break;
		}
	}
	if (find_char == 1)
	{
		for (i_tmp = 0; i < str_len; i++, i_tmp++)
		{
			tmp[i_tmp] = s[i];
		}

		tmp[i_tmp] = '\0';
		*ptr = &tmp[0];
		str_len = _strlen(s);
		s[str_len + 1] = '\0';
	}
	else
	{
		*ptr = '\0';
	}

	return (s);
}
/**
 * _strlen - return length of string
 * @s: first value
 *
 * Return: number of string(int)
 */
int _strlen(char *s)
{
	int i = 0;
	char *array = s;

	while (array[i] != '\0')
	{
		i++;
	}

	return (i);
