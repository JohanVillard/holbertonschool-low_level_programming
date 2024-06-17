#include "main.h"

/**
 * print_alphabet_x10 - test
 * Print alphabet 10 time
 */
void print_alphabet_x10(void)
{
	int ascii_a = 97;
	int ascii_z = 122;
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		for (ascii_a = 97; ascii_a < ascii_z + 1; ascii_a++)
		{
			_putchar(ascii_a);
		}
		_putchar('\n');
	}
}
