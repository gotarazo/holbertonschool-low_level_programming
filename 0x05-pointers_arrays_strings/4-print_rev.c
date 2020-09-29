#include "holberton.h"

/**
* print_rev- Function that prints a string, in reverse
* @s: String to be printed
*/

void print_rev(char *s)
{
int length = 0, a;

while (s[length] != '\0')
length++;

for (a = 1; a <= length; a++)
{
_putchar(s[length - a]);
}
_putchar('\n');
}
