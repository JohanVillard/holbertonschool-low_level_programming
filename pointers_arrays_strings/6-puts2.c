#include "main.h"

/**
 * puts2 - print 1 char out of 2
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
