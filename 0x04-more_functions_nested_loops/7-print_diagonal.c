#include "holberton.h"

/**
* print_diagonal- Draws a diagonal line on the terminal
* @n: integer
* Return: n times \ with spaces
*/

void print_diagonal(int n)
{
int salto, espacio;

if (n <= 0)
_putchar('\n');
for (salto = 0; salto < n; salto++)
{
for (espacio = 0; espacio < salto; espacio++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
