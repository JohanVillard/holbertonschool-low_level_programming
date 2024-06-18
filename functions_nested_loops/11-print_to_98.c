#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98
 * @a: first number
 *
 * Description: print n to 98 with ', ' between number
 *
 * Return: 0
 */
void print_to_98(int a)
{
	int i;

	if (a < 98)
	{		
		for (i = a; i < 99; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
			else
			{
			}
		}
	}
	else if (a > 98)
	{
		for (i = a; 97 < i; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
			else
			{
			}
		}
	}
	else
	{
		printf("%d", a);
	}
	putchar('\n');
}

