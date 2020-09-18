#include <stdio.h>

/**
* main- for that prints the alphabet in lowercase and if excluding e and q
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
}
putchar('\n');
return (0);
}
