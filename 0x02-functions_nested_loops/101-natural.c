#include <stdio.h>

/**
* main- Prints the sum of all the multiples of 3 or 5 below 1024
* Return: 0
*/

int main(void)
{
int num, val;
val = 0;
for (num = 1; num < 1024; num++)
{
if (num % 5 == 0 || num % 3 == 0)
val += num;
}
printf("%d\n", val);
return (0);
}
