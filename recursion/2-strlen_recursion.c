#include "main.h"

/**
* _strlen_recursion - return length of a string
* @s: string to count
*
* Return: number of char
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
