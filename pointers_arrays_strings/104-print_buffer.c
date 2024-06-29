#include <stdio.h>

/**
 * print_buffer - create a hexadecimal file with a string
 * @b: string to transform
 * @size: size in
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int address = 0, address_jump = 10, total_lines, line = 0;

	total_lines = size / 10;

	while (line < total_lines)
	{
		printf("%08x: %s\n", address, b);
		
		address += address_jump;
		line++;
	}
}
