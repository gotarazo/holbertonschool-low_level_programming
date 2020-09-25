#include "holberton.h"

/**
* print_number- Prints an integer
* @n: number
* Return: Integer number
*/

void print_number(int n)
{
unsigned int num = 0;

if (n % 10 < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
if (num < 10)
_putchar(num % 10 + '0');
else
{
print_number(num / 10);
_putchar(num % 10 + '0');
}
}
