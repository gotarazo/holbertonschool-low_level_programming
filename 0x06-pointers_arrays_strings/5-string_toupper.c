#include "holberton.h"

/**
* string_toupper- Changes all lowercase letters of a string to uppercase
* @l: Letter of string to change
* Return: String with all the uppercase letters
*/

char *string_toupper(char *l)
{
char *count;

for (count = l; *count; ++count)
{
if ('a' <= *count && *count <= 'z')
*count -= 'a' - 'A';
}
return (l);
}
