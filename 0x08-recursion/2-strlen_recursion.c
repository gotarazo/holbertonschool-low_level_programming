#include "holberton.h"

/**
* _strlen_recursion- Returns the length of a string
* @s: String
* Return: Length
*/

int _strlen_recursion(char *s)
{
int lenght = 0;

if (*s)
{
lenght++;
lenght += _strlen_recursion(s + 1);
}
return (lenght);
}
