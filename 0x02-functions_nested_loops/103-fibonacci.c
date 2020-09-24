#include <stdio.h>

/**
* main- Fibonacci sequence whose values do not exceed 4,000,000
* Return: 0
*/

int main(void)
{
long num0 = 0, num1 = 0, num2 = 1, fibo = 0;

while (num0 < 4000000)
{
if (num0 % 2 == 0)
fibo += num0;
num0 = num1 + num2;
num1 = num2;
num2 = num0;
}
printf("%lu\n", fibo);
return (0);
}