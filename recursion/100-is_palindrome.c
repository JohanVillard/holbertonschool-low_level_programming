#include "main.h"

/**
 * is_palindrome - it is ?
 * @s: string input
 *
 * Return: 1 if true if 0 false
 */
int is_palindrome(char *s)
{
   int len;

    if (*s == '\0')
    {
      return (1);
    }

    len = _strlen_recursion(s) - 1;
    return (check(s, s + len));
}

/**
 * check - check if first and last char are equal
 * @start: first char of string input
 * @end: last char of string input
 *
 * Return: 1 if true if 0 false
 */
int check(char *start, char *end)
{
    if (start >= end)
  {
    return (1);
  }

  if (*start != *end)
  {
    return (0);
  } return check (start + 1, end - 1);
}

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
