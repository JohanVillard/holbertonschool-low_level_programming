#include <stdio.h>

#include <stdio.h>

/**
 * main - Entry point
 * Display alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascii_lower = 97;
	char ascii_upper = 65;

	for (ascii_lower = 97; ascii_lower < 123; ascii_lower++)
	{
		putchar(ascii_lower);
	}

	for (ascii_upper = 65; ascii_upper < 91; ascii_upper++)
	{
		putchar(ascii_upper);
	}

	putchar('\n');

	return (0);
}
