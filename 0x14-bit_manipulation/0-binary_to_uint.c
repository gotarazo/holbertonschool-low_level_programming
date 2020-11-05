#include "holberton.h"

/**
* binary_to_uint- Converts a binary number to an unsigned int
* @b: Pointer to a string of 0 and 1 chars
* Return: i (converted number) or 0 (if b NULL or there are chars not 0 or 1)
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0, i = 0;

if (!b)
return (0);

while (b[n] != '\0')
{
if (b[n] != '0' && b[n] != '1')
return (0);
i <<= 1;
if (b[n] & 1)
i += 1;
n += 1;
}
return (i);
}
