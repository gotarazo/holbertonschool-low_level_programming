#include "holberton.h"

/**
* _strlen- Returns the length of a string
* @s: String to get the length
* Return: The length
*/

int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;
return (length);
}
