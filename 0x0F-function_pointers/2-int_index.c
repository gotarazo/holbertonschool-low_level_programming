#include "function_pointers.h"

/**
* int_index- Searches for an integer
* @array: Array of integers
* @size: Size of array
* @cmp: Pointer to function to compare values
* Return: index of first element does not retur 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
if (cmp(array[a]) != 0)
return (i);
}
return (-1);
}
