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
int sum = 0, i, elem_of_argv_i;

if (argc == 1)
{
printf("%d\n", 0);
}
else if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (elem_of_argv_i = 0; argv[i][elem_of_argv_i] != '\0'; elem_of_argv_i++)
{
if ((argv[i][elem_of_argv_i] < 48) || (argv[i][elem_of_argv_i] > 57))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}


