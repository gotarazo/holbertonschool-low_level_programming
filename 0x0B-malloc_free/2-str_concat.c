#include "holberton.h"
#include <stdlib.h>

/**
* *str_concat- Concatenates two strings
* @s1: String 1
* @s2: String 2
* Return: Pointer to concatenates strings or NULL (if failure)
*/

char *str_concat(char *s1, char *s2)
{
int a, b, c, d;
char *e;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
;
a++;
for (b = 0; s2[b] != '\0'; b++)
;
e = malloc((a *sizeof(*s1)) + (b * sizeof(*s2)));
a--;
b++;
if (e == NULL)
return (NULL);
for (c = 0, d = 0; c < (a + b); c++)
{
if (c < a)
e[c] = s1[c];
else
{
e[c] = s2[d];
d++;
}
}
return (e);
}
