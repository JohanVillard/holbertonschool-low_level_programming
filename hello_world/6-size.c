#include <stdio.h>

/**
 * main - Entry point
 * use sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int sim_num = 0;
	long int num = 0;
	long long int gran_num = 0;
	float f_num = 0;

	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i byte(s)\n", sizeof(sim_num));
	printf("Size of a long int: %i byte(s)\n", sizeof(num));
	printf("Size of a long long int: %i byte(s)\n", sizeof(gran_num));
	printf("Size of a float: %i byte(s)\n", sizeof(f_num));
}
