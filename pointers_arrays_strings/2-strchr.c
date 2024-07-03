#include "main.h"

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
            return (s);
        }
		else if (*s == '\0')
        {
            return (s);
        }
        s++;
    }
    return (0);
}
