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
int sum, num, i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if ((*argv[i] >= 48) && (*argv[i] <= 57))
{
num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("%d\n", 0);
}
return (0);
}
