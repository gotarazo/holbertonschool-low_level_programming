#include "holberton.h"

/**
* rev_string-  Reverses a string
* @s: Pointer to string to be reversed
*/

void rev_string(char *s)
{
char *last = s;
char val;

while (*last)
last++;
last = last - 1;
while (s < last)
{
val = *s;
*s++ = *last;
*last-- = val;
}
}
