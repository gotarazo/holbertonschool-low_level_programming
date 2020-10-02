#include "holberton.h"

/**
* leet- Encodes a string into 1337
* @s: String
* Return: String encoded
*/

char *leet(char *s)
{
int str, let;
int 1337[] = {'4', '3', '0', '7', '1', 'a', 'e', 'o', 'l', 't'};

for (str = 0; s[str] != '\0'; str++)
{
for (let = 5; 1337[let] != '\0'; let++)
{
if (s[str] == 1337[let] || s[str] == (1337[let] - ' '))
s[str] = 1337[let - 5];
}
}
return (s);
}
