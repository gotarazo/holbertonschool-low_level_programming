#include "holberton.h"

/**
* puts_half- Prints half of a string
* @str: Initial string
*/

void puts_half(char *str)
{
int point = 0, length = 0, n;

while (str[point++])
length++;

if ((length % 2) == 0)
n = length / 2;
else
n = (length + 1) / 2;

for (point = n; point < length; point++)
_putchar(str[point]);

_putchar('\n');
}
