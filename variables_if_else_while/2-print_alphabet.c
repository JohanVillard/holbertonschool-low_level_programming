#include <stdio.h>

/**
 * main - Entry point
 * Display alphabet in lowercase on one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_code = 97;

	for (ascii_code = 97; ascii_code < 123; ascii_code++)
	{
		putchar(ascii_code);
	}

	putchar('\n');

	return (0);
}
