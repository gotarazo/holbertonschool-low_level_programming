#include "holberton.h"

/**
* more_numbers- Prints 10 times the numbers from 0 to 14
* Return: Numbers
*/

void more_numbers(void)
{
int num, num1;

for (num = 0; num < 10; num++)
{
for (num1 = 0; num1 <= 14; num1++)
{
if (num1 >= 10)
_putchar(num1 / 10 + '0');
_putchar(num1 % 10 + '0');
}
_putchar('\n');
}
}
