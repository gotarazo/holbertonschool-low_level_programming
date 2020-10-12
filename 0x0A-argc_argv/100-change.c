#include <stdio.h>
#include <stdlib.h>

/**
* main- prints minimum number of coins to make change for an amount of money
* @argc: Number of parameters
* @argv: Array with parameteres
* Return: 0 (if number negative) or 1 (if error)
*/

int main(int argc, char *argv[])
{
int cant = 0, n;

if (argc != 2)
printf("Error\n");
else
{
n = atoi(argv[1]);

while (n > 0)
{
cant++;

if (n >= 25)
n -= 25;
else if (n >= 10)
n -= 10;
else if (n >= 5)
n -= 5;
else if (n >= 2)
n -= 2;
else
n -= 1;
}
printf("%d\n", cant);
}
return (0);
}
