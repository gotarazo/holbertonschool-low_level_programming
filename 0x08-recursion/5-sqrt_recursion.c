#include "holberton.h"

/**
* sqrt- Square root of n
* @n: Number
* @m: Posible square
* Return: Square (-1 If n does not have a natural square root)
*/

int sqrt(int n, int m)
{
if (m * m < n)
m = sqrt(n, m + 1);

else if (m * m > n)
return (-1);

return (m);
}

/**
* _sqrt_recursion- Returns the natural square root of a number
* @n: Number
* Return: Square root
*/

int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}
