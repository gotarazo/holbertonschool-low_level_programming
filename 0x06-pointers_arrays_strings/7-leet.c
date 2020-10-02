#include "holberton.h"

/**
* leet- Encodes a string into 1337
* @s: String
* Return: String encoded
*/

char *leet(char *s)
{
int str, let;
char 1337[] = "4433007711";
char alpha[] = "aAeEoOtTlL";

for (str = 0; s[str] != '\0'; str++)
{
for (let = 0; let < 10; let++)
{
if (s[str] == alpha[let])
s[str] = 1337[let];
}
}
return (s);
}
