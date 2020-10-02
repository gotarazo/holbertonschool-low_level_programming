#include "holberton.h"

/**
* cap_string- Capitalizes all words of a string
* @s: In String
* Return: Out string with capitalises words
*/

char *cap_string(char *s)
{
int str, word;
char *sep = " \t\n,;.!?\"(){}";

for (str = 0, word = 0; s[str]; ++str)
{
if ('a' <= s[str] && s[str] <= 'z')
{
if (str)
{
for (word = 0; sep[word] && sep[word] != s[str - 1]; ++word)
;
}
if (sep[word])
s[str] -= ('a' - 'A');
}
}
return (s);
}
