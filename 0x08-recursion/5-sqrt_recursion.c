#include "holberton.h"

/**
* _sqrt- Square root of n
* @n: Number
* @m: Posible square
* Return: Square (-1 If n does not have a natural square root)
*/

int _sqrt(int m, int n)
{
if (m * m == n)
return (m);

else
{
if (m * m >= 0)
return (_sqrt(m + 1, n));

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
return (_sqrt(0, n));
}
