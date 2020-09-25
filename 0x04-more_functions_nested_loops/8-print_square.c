#include "holberton.h"

/**
* print_square- Prints a square of size
* @size: Height and width
* Return: size # by size #
*/

void print_square(int size)
{
int altura, ancho;

if (size <= 0)
_putchar('\n');
for (altura = 0; altura < size; altura++)
{
for (ancho = 0; ancho < (size); ancho++)
{
_putchar('#');
}
_putchar('\n');
}
}
