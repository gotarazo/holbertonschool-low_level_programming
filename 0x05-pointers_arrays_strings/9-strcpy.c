#include "holberton.h"

/**
* _strcpy- copies the string pointed to by src, including (\0)
* to the buffer pointed to by dest
* @dest: pointer to destination of string
* @src: pointer to source string to copy from
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int point = 0;

while (src[point])
{
dest[point] = src[point];
point++;
}
return (dest);
}
