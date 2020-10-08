#include "holberton.h"

/**
* sqrt- Square root of n
* @n: Number
* @m: Posible square
* Return: Square (-1 If n does not have a natural square root)
*/

int sqrt(int m, int n)
{
if (m * m == n)
return (m);

else
{
if (m * m >= 0)
return (sqrt(m + 1, n));

else
return (-1);
}
}

/**
* _sqrt_recursion- Returns the natural square root of a number
* @n: Number
* Return: Square root
*/

int _sqrt_recursion(int n)
{
return (sqrt(0, n));
}
