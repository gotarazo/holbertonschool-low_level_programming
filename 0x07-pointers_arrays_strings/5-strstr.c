#include "holberton.h"

/**
* _strstr- Locates a substring finds the first occurrence
* @haystack: Source string
* @needle: String to look
* Return: Pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int count1, count2;

if (needle[0] == '\0')
return (haystack);

for (count1 = 0; haystack[count1] != '\0'; count1++)
{
for (count2 = 0; needle[count2] == haystack[count1 + count2]; count2++)
{
if (needle[count2 + 1] == '\0')
return (haystack + count1);
}
}
return (0);
}
