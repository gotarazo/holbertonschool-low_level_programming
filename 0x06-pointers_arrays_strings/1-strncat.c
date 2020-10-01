#include "holberton.h"

/**
* _strncat- Concatenates two strings use at most n bytes from src
* @dest: String 1
* @src: String 2
* @n: Bytes from src
* Return: Dest pointer with the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
int dest1, src1;

for (dest1 = 0; dest[dest1] != '\0'; dest1++)
;
for (src1 = 0; src[src1] != '\0' && src1 < n; src1++)
{
dest[dest1 + src1] =  src[src1];
}
return (dest);
}
