#include "main.h"

/**
* _pow_recursion - return v power y
* @x: int base
* @y: int exponent
*
* Return: exponentiation
*/
int _pow_recursion(int x, int y)
{
if (y == 1)
{
return (x);
}
else if (y <= 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}