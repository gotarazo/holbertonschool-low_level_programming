#include "holberton.h"

/**
* print_triangle- Prints a triangle with #
* @size: number of #
*/

void print_triangle(int size)
{
int alto, ancho1, ancho2;

if (size <= 0)
_putchar('\n');
for (alto = 1; alto <= size; alto++)
{
for (ancho1 = size - alto; ancho1 > 0; ancho1--)
_putchar(' ');
for (ancho2 = alto; ancho2 > 0; ancho2--)
_putchar('#');
_putchar('\n');
}
}
