#include "holberton.h"

/**
* print_last_digit -function that prints the last digit of a number
* @n: Full Number
* Return: last digit
*/

int print_last_digit(int n)
{
int digit;
digit = n % 10;

if (digit < 0)
{
_putchar((-1 * digit) +'0');
return (-1 * digit);
}
else
_putchar(digit + '0');
return (digit);
}
