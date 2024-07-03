#include "main.h"
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
/**
 * _strstr - locate the first occurence of char
 * in strinf and compare to other string
 * @haystack: string where search
 * @needle: string
 *
 * Return: pointer of locate char in string
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
		}
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
			if (*needle == '\0')
			{
				return (ptr);
			} haystack++;
		}
		return (0);
}

