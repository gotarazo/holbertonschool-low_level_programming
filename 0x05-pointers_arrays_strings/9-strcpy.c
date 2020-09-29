#include "holberton.h"

/**
* _strcpy- copies the string pointed to by src, including terminating null byte
* to the buffer pointed to by dest
* @dest: pointer to destination of string
* @src: pointer to source string to copy from
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int point;

for (point = 0; src[point] != '\0'; point++)
dest[point] = src[point];
dest[point] = '\0';
return (dest);
}

