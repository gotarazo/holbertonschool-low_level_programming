#include "holberton.h"

/**
* print_line- Draws a straight line in the terminal
* @n: number of times that prints
* Return: n times the character _
*/

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
