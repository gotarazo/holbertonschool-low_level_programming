#include <stdio.h>

/**
* main- for that prints the alphabet in lowercase and uppercase
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
