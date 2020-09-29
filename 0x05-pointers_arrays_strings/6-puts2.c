#include "holberton.h"

/**
* puts2- Prints every other character of a string (first out of two)
* @str: String
*/

void puts2(char *str)
{
int point = 0, lenght = 0;

while (str[point++])
lenght++;

for (point = 0; point < lenght; point += 2)
_putchar(str[point]);

_putchar('\n');
}
