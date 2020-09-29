#include "holberton.h"

/**
* _atoi- convert a string to an integer
* @s: String
* Return: Integer of the string
*/

int _atoi(char *s)
{
int sig = 1;
unsigned int n = 0;

while (*s++)
{
if (*s == '-')
sig *= -1;

else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');

else if (n > 0)
break;
}
return (sig * n);
}
