#include "holberton.h"

/**
* reverse_array- Reverses the content of an array of integers
* @a: Pointer to array
* @n: Lenght of array
* Return: Array reversed
*/

void reverse_array(int *a, int n)
{
for (; --n > 0; ++a, --n)
{
*a ^= a[n];
a[n] ^= *a;
*a ^= a[n];
}
}
