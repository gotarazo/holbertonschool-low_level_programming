#include "holberton.h"

/**
* _strcmp- compares 2 strings
* @s1: String 1
* @s2: String 2
* Return: Difference between strings
*/

int _strcmp(char *s1, char *s2)
{
int count;

for (count = 0; (s1[count] == s2[count]) && (s1[count] != '\0'); count++)
;
return (s1[count] - s2[count]);
}
