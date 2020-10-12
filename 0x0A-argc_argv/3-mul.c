#include <stdio.h>

/**
* main- Multiplies two numbers
* @argc: Number 1
* @argv: Number 2
* Return: 0
*/

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
