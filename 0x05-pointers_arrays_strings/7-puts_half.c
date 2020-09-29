#include "holberton.h"

/**
* puts_half- Prints half of a string
* @str: Initial string
*/

void puts_half(char *str)
{
int point = 0, lenght = 0, n;

while (str[point++])
lenght++;

if ((len % 2) == 0)
n = lenght / 2;
else
n = (lenght + 1) / 2;

for (point = n; point < lenght; point++)
_putchar(str[point]);

_putchar('\n');
}
