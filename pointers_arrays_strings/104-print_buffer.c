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
			if (b[i_b] == '\0' || b[i_b] == '\1' || b[i_b] == '\2'
					|| b[i_b] == '\3' || b[i_b] == '\4'
					|| b[i_b] == '\5' || b[i_b] == '\6'
					|| b[i_b] == '\7' || b[i_b] == '\n')
			{
				tmp[i_tmp] = '.';
			}
			else
			{
				tmp[i_tmp] = b[i_b];
			}
		}
		
		printf("%08x: %s\n", address, tmp)
			;
		address += address_jump;
		line++;
	}
}
