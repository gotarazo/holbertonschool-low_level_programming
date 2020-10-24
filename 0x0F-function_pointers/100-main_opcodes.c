#include <stdio.h>
#include <stdlib.h>

/**
* main- Prints the opcodes of its own main function
* @argc: Number of arguments
* @argv: Array of pointers to arguments
* Return: 0
*/

int main(int argc, char *argv[])

{
int (*dir)(int, char **) = main;
unsigned char opcode;
int hexabytes, i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
hexabytes = atoi(argv[1]);

if (hexabytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < hexabytes; i++)
{
opcode = *(unsigned char *)dir;
printf("%.2x", opcode);

if (i == hexabytes - 1)
continue;
printf(" ");
dir++;
}
printf("\n");
return (0);
}
