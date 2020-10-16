#include "holberton.h"
#include <stdlib.h>

/**
* array_range- Creates an array of integers
* @min: Minimun integer
* @max: Maximun integer
* Return: Pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *p, n;

if (min > max)
return (NULL);

p = malloc((max - min + 1) * sizeof(int));

if (p == NULL)
return (NULL);

for (n = 0; n + min <= max; n++)
p[n] = min + n;

return (p);
}
