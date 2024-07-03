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
int result;
if (argc > 2)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
printf("Error\n");
}
return (0);
}
