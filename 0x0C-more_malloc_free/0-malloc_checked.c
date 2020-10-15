#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked- Allocates memory using malloc
* @b: unsigned int
* Return: Pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);

if (n == NULL)
exit(98);
return (n);
}
