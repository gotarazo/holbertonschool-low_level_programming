#include <stdio.h>
#include "holberton.h"

/**
* print_diagsums- Prints sum of two diagonals of square matrix of integers
* @a: Square matrix
* @size: Size of array
* Return: The 2 sums of integers
*/


void print_diagsums(int *a, int size)
{
int i = 0, sum1 = 0, sum2 = 0;

for (i = 0; i < size * size; i += (size + 1))
sum1 += a[i];

for (i = size - 1; i < (size * size) - 1; i += (size - 1))
sum2 += a[i];

printf("%d, %d\n", sum1, sum2);
}
