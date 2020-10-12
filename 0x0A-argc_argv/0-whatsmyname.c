#include <stdio.h>

/**
* main- Prints its name (of program)
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
