#include <stdio.h>

/**
* main- for that prints the digits in base 16
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
for (digit = 'a'; digit <= 'f'; digit++)
putchar(digit);
putchar('\n');
return (0);
}
