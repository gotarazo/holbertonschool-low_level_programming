#include "holberton.h"
#include "2-strchr.c"

/**
* _strpbrk- Searches a string for any of a set of bytes
* @s: String for search
* @accept: String of bytes to search
* Return: Pointer to byte in s that matches one of bytes in accept (or NULL)
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (_strchr(accept, *s++))
return (s);
}
return ('\0');
}
