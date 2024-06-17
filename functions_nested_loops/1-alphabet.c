#include "main.h"

/**
 * print_alphabet - test
 * Print alphabet in lowercase on one line
 */
void print_alphabet(void)
{
	int ascii_a = 97;
	int ascii_z = 122;

	for (ascii_a = 97; ascii_a < ascii_z + 1; ascii_a++)
	{
		_putchar(ascii_a);
	}

	_putchar('\n');
}
