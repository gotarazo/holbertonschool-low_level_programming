#include "holberton.h"
#include <stdio.h>

/**
* main- Pprints numbers from 1 to 100, Fizz if multiples of 3 and Buzz of 5
* Return: List of numbers
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
