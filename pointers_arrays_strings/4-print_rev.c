#include "main.h"

/**
 * print_rev - print reverse string
 * @s: array of char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, j= 0;
	char *array = s, letter;

	while (array[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		letter = array[j];
		_putchar(letter);
	}

	_putchar('\n');
}
