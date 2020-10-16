#include "holberton.h"
#include <stdlib.h>

/**
* _realloc- Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previusly allocated
* @old_size: Size, in bytes, of the allocated space for ptr
* @new_size: New size, in bytes of the new memory block
* Return: Pointer to new memory location
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int n = 0;
char *a, *b;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
ptr = malloc(new_size);
if (!ptr)
return (NULL);
return (ptr);
}
if (!new_size && ptr)
{
free(ptr);
return (NULL);
}
a = malloc(new_size);
b = ptr;
if (old_size > new_size)
old_size = new_size;
for (n = 0; n < old_size; n++)
a[n] = b[n];
free(ptr);
return (a);
}
