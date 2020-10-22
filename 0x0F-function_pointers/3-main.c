#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main- Result of an operation
* @argc: Number of arguments
* @argv: Arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
int equal;

if (argc == 4)
{
equal = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n"equal);
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
