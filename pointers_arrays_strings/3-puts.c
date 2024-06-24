#include "main.h"

/**
 * _puts - print string
 * @str: array of char
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	char *array = str, letter;

	while (array[i] != '\0')
	{
		letter = array[i];
		_putchar(letter);
		i++;
	}

	_putchar('\n');
}
