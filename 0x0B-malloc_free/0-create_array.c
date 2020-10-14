#include "holberton.h"

/**
* create_array- Creates array of chars and initializes it with a specific char
* @size: Size of string
* @c: Char
* Return: Pointer to array or Null (if fails or size 0)
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ch;

ch = (malloc(size));

if (size == 0 || ch == NULL)
return (0);

for (i = 0; i < size; i++)
ch[i] = c;

return (ch);
}
