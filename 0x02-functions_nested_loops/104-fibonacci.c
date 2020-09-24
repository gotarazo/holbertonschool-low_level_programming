#include <stdio.h>
#include "holberton.h"

/**
* main- finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main(void)
{
int count;
unsigned long a, b, c, d, e, f, g;

a = 0;
b = 1;

for (count = 1; count <= 90; count++)
{
c = a + b;
a = b;
b = c;
printf("%lu, ", c);
}

d = a % 1000;
a = a / 1000;
e = b % 1000;
b = b / 1000;

while (count <= 98)
{
g = (d + e) / 1000;
f = (d + e) -g * 1000;
c = (a + b) +g;
a = b;
b = c;
d = e;
e = f;

if (f >= 100)
printf("%lu%lu", c, f);
else
printf("%lu0%lu", c, f);
if (count < 98)
printf(", ");
count++;
}
putchar('\n');
return (0);
}
