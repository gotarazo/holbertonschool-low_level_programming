#include "holberton.h"

/**
 * swap_int- Swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */

void swap_int(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
