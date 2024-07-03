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
	char *ptr;

	if (*needle == '\0')
	{
		return (0);
	}

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			ptr = haystack;
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
				if ((*haystack == '\0' || *needle == '\0') && needle == ptr)
				{
					return (ptr);
				}
				else if (*haystack == '\0')
				{
					return (0);
				}
			}
		}
		haystack++;
	}
	return (0);
}

