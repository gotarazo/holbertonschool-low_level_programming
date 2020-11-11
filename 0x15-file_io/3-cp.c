#include "holberton.h"

/**
* main- Copies the contents of a file to another file
* @argc: Number of arguments passed to program
* @argv: Array of variables, names of file to read and new file
* Return: 0 on success. Exit on error.
*/

int main(int argc, char *argv[])
{
int file, n, len, format;
char buf[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

n = open(argv[1], O_RDONLY);
if (n < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file < 0)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
do {
len = read(count, buf, 1024);
format = write(file, buf, len);
} while (len == 1024);

if (len < 0)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",

argv[1]), exit(98);
if (format < 0)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",

argv[2]), exit(99);
if (close(n) < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n), exit(100);
if (close(file) < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
return (0);
}
