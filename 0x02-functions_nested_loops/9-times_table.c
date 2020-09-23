#include "holberton.h"

/**
* times_table -function that prints the 9 times table, starting with 0
* Description: for loops nested
* Return: 0
*/

void times_table(void)
{
int d1, d2, prod;

for (d1 = 0; d1 <= 9; d1++)
{
for (d2 = 0; d2 <= 9; d2++)
{
prod = d1 * d2;
if (prod <= 9)
{
if (d2 > 0)
_putchar(' ');
_putchar(prod + '0');
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
if (d2 < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
