#include "holberton.h"
#include <stdio.h>

/**
* print_times_table- prints the n times table, from 0 to 15
* @n: In number
* Return: Multiplication tables
*/

void print_times_table(int n)
{
int a, b, c, prod;

if ((n < 15) && (n >= 0))
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
prod = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (prod <= 9)
{
_putchar(' ');
_putchar(' ');
}
}
if (prod > 99)
{
c = prod / 10;
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else if ((prod >= 10) && (prod <= 100))
{
_putchar(' ');
_putchar(prod / 10 + '0');
}
_putchar(prod % 10 + '0');
}
_putchar('\n');
}
}
}
