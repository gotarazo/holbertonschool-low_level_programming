#include <stdio.h>

/**
* print_array- Print n elments of an array of integers
* @a: Array
* @n: Number of elements to be printed
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
printf(", ");
}
printf("\n");
}
