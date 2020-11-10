#include "holberton.h"

/**
* main- Displays information contained in ELF header at start of an ELF file
* @argc: Count of arguments present in CLI
* @argv: Pointer to array of pointers to arguments
* Return: 1 on success or error code on failure
*/

int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
