#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0, half_string = 0, i = 0;

	while (str[count])
	{
		count++;
	}

	if (count % 2 != 0)
	{
		count--;
		half_string = count / 2;
		half_string++;
		count++;
	}
	else
	{
		half_string = count / 2;
	}

	for (i = half_string; i < count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
