#include "holberton.h"

/**
* _strchr- Locates a character in a string
* @s: The string
* @c: The character
* Return: Pinter to the first occurence of c (Null if not found)
*/

char *_strchr(char *s, char c)
{
int point;

for (point = 0; s[point] >= '\0'; point++)
{
if (s[point] == c)
return (s + point);
}
return ('\0');
}
