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
	int result, i, elem_of_argv_i;	/* Déclarations de variables */

	if (argc == 3) /* Cmd + num1 + num2 */
	{
		for (i = 2; i < argc; i++) /* Pointe chaque num */
		{
			for (elem_of_argv_i = 0; argv[i][elem_of_argv_i] != '\0'; elem_of_argv_i++) /* Passe sur chaque elem du tab */
			{
				if ((argv[i][elem_of_argv_i] < 48) || (argv[i][elem_of_argv_i] > 57)) /* Si n'est pas un chiffre */
				{
					printf("Error\n");
					return (1);
				}
			}
			result = atoi(argv[1]) * atoi(argv[2]); /* num1 * num2 */
			printf("%d\n", result);
		}
	}
	else /* Fin du programme */
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}







