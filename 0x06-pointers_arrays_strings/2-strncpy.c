#include "holberton.h"

/**
* _strncpy- Copies a string of n bytes
* @dest: Destiny string
* @src: Source string
* @n: Bytes of source string
* Return: Dest string with a src copy
*/

char *_strncpy(char *dest, char *src, int n)
{
int lenght;

for (lenght = 0; lenght < n && src[lenght] != '\0'; lenght++)
dest[lenght] = src[lenght];

for (; lenght < n; lenght++)
dest[lenght] = '\0';

return (dest);
}
