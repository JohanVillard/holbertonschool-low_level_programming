#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: (sum)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subcract 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: (difference)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Multiply 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: (product)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: (result)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: (remainder)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
