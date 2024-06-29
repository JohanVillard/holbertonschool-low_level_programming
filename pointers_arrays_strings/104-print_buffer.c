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
	int i = 0, actual_i = 0, char_limit = 10;
	int last_line_size = size % 10;

	total_lines = size / 10;

	if (size != 0)
	{
		while (line <= total_lines)
		{
			printf("%08x: ", address);

			for (i = actual_i; i < char_limit; i++)
			{
				if (line != total_lines)
				{
					printf("%02x", b[i]);
				}
				else
				{
				if (b[i] == '\0' && b[i - 1] <= '\0')
				{
					printf("  ");	
				}
				else if (b[i] == '\0')
				{
					printf("00");
				}
				else
				{
					printf("%02x", b[i]);
				}
				}
				if (i % 2 != 0)
				{
					printf(" ");
				}
			}
			if (line == total_lines)
			{
				for (; i < char_limit + (10 - last_line_size); i++)
				{
					printf("  ");
					if (i % 2 != 0)
					{
						printf(" ");
					}
				}
			}
			for (i = actual_i; i < char_limit; i++)
			{
				if ((b[i] == '\0' || b[i] == '\1' || b[i] == '\2'|| b[i] == '\3'
				|| b[i] == '\4'|| b[i] == '\5'
				|| b[i] == '\6'|| b[i] == '\7'
				|| b[i] == '\n'|| b[i] == '\t'))
				{
					printf(".");
				}
				else
				{
					printf("%c", b[i]);
				}
			}
			putchar('\n');
		
			address += address_jump;
			line++;
			actual_i = i;
			if (line != total_lines)
			{
				char_limit += address_jump;
			}
			else
			{
				char_limit += last_line_size;
			}

			if (last_line_size == 0 && line == total_lines)
			{
				break;
			}
		}
	}
	else
	{
	printf("\0");
	}
}
