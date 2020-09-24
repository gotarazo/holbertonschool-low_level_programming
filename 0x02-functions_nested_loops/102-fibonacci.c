#include <stdio.h>

/**
* main- Prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main(void)
{
int count;
unsigned long num = 0, next = 1, sum;

for (count = 1; count <= 50; count++)
{
sum = num + next;
printf("%lu", sum);

num = next;
next = sum;

if (count == 50)
printf("\n");
else
printf(", ");

}
return (0);
}
