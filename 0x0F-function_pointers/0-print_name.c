#include "holberton.h"
#include <stdlib.h>

/**
* print_name- Prints a name
* @name: String
* @f: Funtion pointer
* Return: Name printed
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
