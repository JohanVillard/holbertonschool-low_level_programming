#include "main.h"

/**
* wildcmp - compare 2 strings
* @s1: first string
* @s2: second string
*
* Return: 1 if identical, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if ((*(s2 + 1) == '*' || *(s2 + 1) == '\0') && *(s1 + 1) == '\0')
	{
		return (1);
	}

	if (*s2 == '*' && (*(s2 + 1) == *s1 || *(s2 + 1) == '*'))
	{
		return (wildcmp(s1, s2 + 1));
	}

	if (*s2 == '*' && *(s2 + 1) != *(s1 + 1))
	{
		return (wildcmp(s1 + 1, s2));
	}

	if (*s2 == '*' && *(s2 + 1) == *(s1 + 1))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == *s1  && *(s2 + 1) != '\0' && *(s1 + 1) != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 != *s1)
	{
		return (0);
	}

	return (0);
}