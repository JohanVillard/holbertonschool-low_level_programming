#include "main.h"
#include <stdio.h>

/**
* main - print arg[0]
* @argc: count arguments
* @argv: store arguments in string
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
