#include "main.h"
#include <stdio.h>

int _sqrt_guess(int guess, int n);

/**
* _sqrt_recursion - return natural square
* @n: int number
*
* Return: exponentiation
*/

int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
return (_sqrt_guess(2, n));

}

/**
* _sqrt_guess - guess the squareroot
* @guess: int number which is tested
* @n: int radicande
*
* Return: squareroot of y
*/
int _sqrt_guess(int guess, int n)
{
if (n == 1)
{
return (1);
}
if ((guess * guess <= n) && ((guess + 1) * (guess + 1) > n))
{
if (guess * guess == n)
{
return (guess);
}
else
{
return (-1);
}
}
else
{
return (_sqrt_guess(guess + 1, n));
}
}
