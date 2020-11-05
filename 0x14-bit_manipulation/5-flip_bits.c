#include "holberton.h"

/**
* flip_bits- Return number of bits needed to flipped from one number to another
* @n: Number
* @m: Number to flip n to m
* Return: The necessary number of bits to flip to get from n to m.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}
return (bits);
}
