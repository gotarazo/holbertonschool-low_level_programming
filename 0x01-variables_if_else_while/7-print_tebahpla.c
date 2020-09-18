#include <stdio.h>

/**
* main- for that prints the reverse alphabet in lowercase
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
