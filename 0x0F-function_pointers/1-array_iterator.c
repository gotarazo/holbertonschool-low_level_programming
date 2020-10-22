#include "function_pointers.h"

/**
* array_iterator- Executes function given as parameter on each element of array
* @array: Array to funtion
* @size: Size of array
* @action: Pointer to funtion
* Return: Pointer to array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
