#include "holberton.h"

/**
* _abs -function that computes the absolute value of an integer
* @n: Integer number to check
* Return: n absolute value
*/

int _abs(int n)
{
if (n < 0)
n *= -1;
return (n);
}
