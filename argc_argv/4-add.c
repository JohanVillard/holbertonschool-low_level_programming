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
int sum = 0, i;

if (argc == 1)
{
printf("%d\n", 0);
}
else if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if ((*argv[i] < 48) || (*argv[i] > 57))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (1);
}
