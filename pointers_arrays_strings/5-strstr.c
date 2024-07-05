#include "main.h"
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
/**
 * _strstr - locate the first occurence of char
 * in string and compare to other string
 * @haystack: string where search
 * @needle: string
 *
 * Return: pointer of locate char in string
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr, i = 0;

	if (*haystack == '\0')
	{
		return (0);
	}

	if (*needle == '\0')
	{
		ptr = haystack;
		return (ptr);
	}

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			ptr = haystack;
			while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			{
				haystack++;
				needle++;
				i++;
				if (*needle == '\0')
				{
					return (ptr);
				}
				else if (*haystack == '\0')
				{
					return (0);
				}
			}
			while (i > 0)
			{
				needle--;
				i--;
			}
		}
		haystack++;
	}
	return (0);
}

