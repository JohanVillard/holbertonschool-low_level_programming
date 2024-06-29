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
	int i_tmp, i_b = 0;
	char tmp[10] = {0};

	total_lines = size / 10;

	while (line <= total_lines)
	{
		for (i_tmp = 0; i_tmp < 10; i_tmp++, i_b++)
		{
			tmp[i_tmp] = b[i_b];
		}
		
		printf("%08x: %s", address, tmp);
				
		if (line != total_lines)
		{
			putchar('\n');
		}
		
		address += address_jump;
		line++;
	}
}
