#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - multiply two numbers
* @argc: count arguments
* @argv: store arguments in string
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int num, result = 0;

	if (argc - 1 == 1) 
	{
		num = atoi(argv[1]);

		if (num < 0)
		{
			printf("0\n");
			return 0;
		}

		result = num / 25;
		num -= result * 25;

		if (num % 25 != 0)
		{
			result += (num % 25) / 10;
			num -= ((num % 25) / 10) * 10;

			if (num % 10 != 0)
			{
				result += (num % 10) / 5;
				num -= ((num % 10) / 5) * 5;

				if (num % 5 != 0)
				{
					result += (num % 5) / 2;
					num -= ((num % 5) / 2) * 2;

					if (num % 2 != 0)
					{
						result += num % 2;
					}
				}
			}
		}

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
