#include "holberton.h"

/**
* _strcat- Concatenates two strings
* @dest: Strin1
* @src: String2
* Return: Dest pointer with the resulting string
*/

char *_strcat(char *dest, char *src)
{
int dest1, src1;

for (dest1 = 0; dest[dest1] != '\0'; dest1++)
;
for (src1 = 0; src[src1] != '\0'; src1++)
{
dest[dest1 + src1] =  src[src1];
}
dest[dest1 + src1]  = '\0';
return (dest);
}
