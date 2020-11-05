#include "holberton.h"

/**
* get_endianness- Checks the endianness
* Return: 0 (if big endian) or 1 (if little endian)
*/

int get_endianness(void)
{
int i = 2;

if (i & 1)
return (0);

else
return (1);
}
