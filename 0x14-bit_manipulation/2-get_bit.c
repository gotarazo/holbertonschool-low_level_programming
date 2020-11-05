#include "holberton.h"

/**
* get_bit -Return the value of a bit at a given index
* @n: Number to check
* @index: Index to check
* Return: Value of the bit at index or -1 (if an error occured)
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
return (-1);

return ((n & (1 << index)) ? 1 : 0);
}
