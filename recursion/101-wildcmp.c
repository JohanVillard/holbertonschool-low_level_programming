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
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}

	if (*s2 == *s1)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    if (*s2 == '*')
    {
    	return (wildcmp(s1, s2 + 1) || (wildcmp(s1 + 1, s2)));
    }

    if (*s2 != *s1)
    {
        return (0);
    }
	
    return (0);
}
