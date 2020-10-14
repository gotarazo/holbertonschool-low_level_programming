#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup- returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: String
* Return: Pointer to the duplicated string or NULL (if str NULL)
*/

char *_strdup(char *str)
{
char *c;
int i, n;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
i++;
c = malloc(i * sizeof(*c));
if (c == NULL)
return (NULL);
for (n = 0; n < i; n++)
c[n] = str[n];
return (c);
}
