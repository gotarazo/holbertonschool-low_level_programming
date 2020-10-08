#include "holberton.h"

/**
* wildcmp- Compares 2 strings and returns 1 if are identical (otherwise 0)
* @s1: String 1
* @s2: String 2 (can contain the special character *)
* Return: 1 or 0
*/


int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));

else if (wildcmp(s1, s2 + 1))
return (1);

else
return (wildcmp(s1 + 1, s2));
}
return (0);
}
