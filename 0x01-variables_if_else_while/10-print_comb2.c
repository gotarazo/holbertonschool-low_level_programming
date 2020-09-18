#include <stdio.h>

/**
* main- for that prints numbers from 00 to 99
* Description: using only the putchar function
* Return: 0
*/

int main(void)
{
int num;
for (num = 0; num <= 99; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
