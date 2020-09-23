#include <stdio.h>

/**
* print_to_98 -function that prints all natural numbers from n to 98
* @n: Number <, > or = 98
* Return: list of numbers
*/

void print_to_98(int n)
{
for (n; n > 98; n--)
printf("%d, ", n);
for (n; n < 98; n++)
printf("%d, ", n);
printf("98\n");
}
