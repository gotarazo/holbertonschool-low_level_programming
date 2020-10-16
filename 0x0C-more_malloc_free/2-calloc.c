#include "holberton.h"
#include <stdlib.h>

/**
* _calloc- Allocates memory for an array using malloc
* @nmemb: Array of elements
* @size: In bytes
* Return: Pointer to the allocated memory or NULL (if fails or 0)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int n;
char *p;

if (nmemb != 0 && size != 0)
{
p = malloc(nmemb * size);
if (p != NULL)
{
for (n = 0; n < nmemb * size; n++)
p[n] = 0;
return (p);
}
}
return (NULL);
}
