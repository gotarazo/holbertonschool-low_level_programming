#include "holberton.h"

/**
* sqrt- Square root of n
* @n: Number
* @m: Posible square
* Return: Square (-1 If n does not have a natural square root)
*/

int sqrt(int n, int m)
{
if (n == 1)
return (1);

if (m * m == n)
return (m);

if ((m == n / 2) || n < 0)
return (-1);

return (sqrt(n, m + 1));
}

/**
* _sqrt_recursion- Returns the natural square root of a number
* @n: Number
* Return: Square root
*/

int _sqrt_recursion(int n)
{
return (sqrt(n, 0));
}
