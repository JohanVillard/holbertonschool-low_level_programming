#include "main.h"
har *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
/**
 * _strstr - locate the first occurence of char
 * in strinf and compre to other string
 * @haystack: string where search
 * @needle: string
 *
 * Return: pointer of locate char in string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (_strcmp(haystack, needle) == 0)
			{
				return (haystack); }}
		haystack++; }
	return (0); }
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
		i++; }
	return (0); }
/**
 * _strcmp - compare the first letter of 2 string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 for equal, plus for bigger than and minus for smaller than
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0, i;

	for (i = 0; i < s1[i]; i++)
	{
		result = s1[i] - s2[i];

		if (result != 0)
		{
			break;
		}
	}
	return (result); }
