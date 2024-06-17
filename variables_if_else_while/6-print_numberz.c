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

	for (ascii_zero = 48; ascii_zero < ascii_nine + 1; ascii_zero++)
	{
		putchar(ascii_zero);
	}

	putchar('\n');

	return (0);
}

