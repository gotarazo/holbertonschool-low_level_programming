#include <stdio.h>
#include <stdlib.h>

/**
* main- Adds positive numbers
* @argc: Number
* @argv: Array
* Return: The sum or 0 (if no numbers) or 1 (if no digits)
*/

int main(int argc, char *argv[])
{
int num, n, sum = 0;

for (num = 1; num < argc; num++)
{
for (n = 0; argv[num][n]; n++)
{
if (argv[num][n] < '0' || argv[num][n] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
