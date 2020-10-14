#include "holberton.h"
#include <stdlib.h>

/**
* argstostr- Concatenates all the arguments of your program
* @ac: Array size
* @av: Arguments array
* Return: Pointer to string or NULL (if fails or 0)
*/

char *argstostr(int ac, char **av)
{
int w, x, y = 0, z = 0;
char *c;

if (ac < 1 || !av)
return (NULL);
for (w = 0; w < ac; w++)
for (x = 0; av[w][x]; x++)
z++;
z += ac + 1;
c = malloc(sizeof(char) * z);
if (!c)
return (NULL);
for (w = 0; w < ac; w++)
{
for (x = 0; av[w][x]; x++)
c[y++] = av[w][x];
c[y++] = '\n';
}
c[y] = '\0';
return (c);
}
