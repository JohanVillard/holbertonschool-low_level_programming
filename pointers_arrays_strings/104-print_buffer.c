#include <stdio.h>
#include <stdlib.h>

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
	int i_tmp, i_b = 0, char_limit = 10;
	int last_line_size = size % 10;
	char tmp[11] = {0};
	char tmp_end[11] = {0};

	total_lines = size / 10;
	
	while (line <= total_lines)
	{
		for (i_tmp = 0; i_tmp < char_limit; i_tmp++, i_b++)
		{
			if (b[i_b] == '\0' || b[i_b] == '\1' || b[i_b] == '\2'
					|| b[i_b] == '\3' || b[i_b] == '\4'
					|| b[i_b] == '\5' || b[i_b] == '\6'
					|| b[i_b] == '\7')
			{
				tmp[i_tmp] = '.';
			}
			else
			{
				tmp[i_tmp] = b[i_b];
			}

			if (line == total_lines)
			{
				tmp_end[i_tmp] = tmp[i_tmp];
			}
		}
		
		tmp[i_tmp] = '\0';
		tmp_end[i_tmp] = '\0';

		printf("%08x: ", address);

		if (line == total_lines)
		{
				for (i_tmp = 0; i_tmp < 10; i_tmp++)
				{
					if (tmp_end[i_tmp + 1] == '\0' && tmp_end[i_tmp] == '.')
					{
						printf("00");
					}
					else if (tmp_end[i_tmp] == '\0')
					{
						printf("  ");
					}
					else
					{
						printf("%02x", tmp_end[i_tmp]);
					}
					if (i_tmp % 2 != 0)
					{
						printf(" ");
					}
				}
			printf("%s\n", tmp_end);
		}
		else
		{
			for (i_tmp = 0; i_tmp < 10; i_tmp++)
			{	
				printf("%02x", tmp[i_tmp]);
				if (i_tmp % 2 != 0)
				{
					printf(" ");
				}
			}
			printf("%s\n", tmp);
		}

		address += address_jump;
		line++;

		if (line == total_lines)
		{
			char_limit = last_line_size;
		}
	}
}
