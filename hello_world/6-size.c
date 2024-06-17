#include <stdio.h>

/**
 * main - Entry point
 * use sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 0;

	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");
}
