#include "holberton.h"

/**
* _memset- fills memory with a constant byte
* @s: Pointer to memory area
* @b: Constant byte
* @n: First bytes of memory
* Return: Pointer to memory area modified
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int point;

for (point = 0; point < n; point++)
s[point] = b;

return (s);
}
