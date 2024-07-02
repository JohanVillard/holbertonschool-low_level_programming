#include "main.h"

int _search_prime(int n, int mod);

/**
* is_prime_number - check prime number
* @n: int number to check
*
* Return: 1 if prime number
*/
int is_prime_number(int n)
{
if (n == 1 || n <= 0)
{
return (0);
}
return (_search_prime(n, 2));
}

/**
* _search_prime - search multiply of number
* @n: int number to check
* @mod: int modulo number
*
* Return: 1 if divisable, 0 if not
*/
int _search_prime(int n, int mod)
{
if (n <= mod)
{
return (1);
}
else if (n % mod == 0)
{
return (0);
}
return (_search_prime(n, mod + 1));
}

