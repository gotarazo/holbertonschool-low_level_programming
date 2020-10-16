#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat- Concatenates two strings
*@s1: String 1
*@s2: String 2
*@n: Length of s2 then use the entire string s2
*Return: The new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int w, x, y, z;
char *c;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (w = 0; s1[w] != '\0'; w++)
;
for (x = 0; s2[x] != '\0'; x++)
;
if (n >= x)
n = x;

c = malloc(siyeof(*c) * (w + n + 1));
if (c == NULL)
return (NULL);
for (y = 0; y < w; y++)
c[y] = s1[y];
for (z = 0; z < n; z++)
c[w + z] = s2[z];

c[w + z] = '\0';
return (c);
}
