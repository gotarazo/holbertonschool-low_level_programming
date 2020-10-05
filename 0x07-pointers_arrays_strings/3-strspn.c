#include "holberton.h"

/**
* _strspn- Gets the length of a prefix substring
* @s: initial segment string
* @accept: Substring of bytes
* Return: Lenght in bytes
*/


unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s && _strchr(accept, *s++))
count++;

return (count);
}
