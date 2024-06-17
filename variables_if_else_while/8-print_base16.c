#include <stdio.h>

/**
 * main - Entry point
 * Display base ten one digit with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_zero = 48;
	int ascii_nine = 57;
	int ascii_a = 97;
	int ascii_g = 103;

	for (ascii_zero = 48; ascii_zero < ascii_nine + 1; ascii_zero++)
	{
		putchar(ascii_zero);
	}

	for (ascii_a = 97; ascii_a < ascii_g; ascii_a++)
	{
		putchar(ascii_a);
	}

	putchar('\n');

	return (0);
}

