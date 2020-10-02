#include "holberton.h"

/**
* rot13- Encodes a string using rot13
* @s: String
* Return: String encode
*/

char *rot13(char *s)
{
int count1, count2;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char cod[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (count1 = 0; s[count1] != 0; count1++)
{
for (count2 = 0; alpha[count2] != 0; count2++)
{
if (s[count1] == alpha[count2])
{
s[count1] = cod[count2];
break;
}
}
}
return (s);
}
