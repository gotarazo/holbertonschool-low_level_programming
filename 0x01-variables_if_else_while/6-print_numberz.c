#include <stdio.h>

/**
* main- for that prints the digits in base 10
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
int digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
putchar('\n');
return (0);
}
