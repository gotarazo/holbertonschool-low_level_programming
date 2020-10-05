#include "holberton.h"

/**
* _memcpy- Copies memory area
* @src: Source memory area
* @dest: Destination memory area
* @n: Number of bytes from memory area
* Return: Modified array.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int point;

for (point = 0; point < n; point++)
dest[point] = src[point];}

return (dest);
}
