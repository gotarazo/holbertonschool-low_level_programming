#include "holberton.h"

/**
* main- Copies the contents of a file to another file
* @ac: Number of arguments passed to program
* @av: Array of variables, names of file to read and new file
* Return: 0 on success. Exit on error.
*/

int main(int ac, char **av)
{
char buff[1024];
int from, to, len;

if (ac != 3)
ERROR1(97, "Usage: cp from to");

from = open(av[1], O_RDONLY);
if (from == -1)
ERROR2(98, "Error: Can't read from file", av[1]);

to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
if (to == -1)
ERROR2(99, "Error: Can't write to", av[2]);

while ((len = read(from, buff, 1024)) > 0)
{
if ((write(to, buff, len)) == -1)
ERROR2(99, "Error: Can't write to", av[2]);
}
if (len == -1)
ERROR2(98, "Error: Can't read from file", av[1]);
if (close(from) == -1)
ERROR3(100, "Error: Can't close fd", from);
if (close(to) == -1)
ERROR3(100, "Error: Can't close fd", to);

return (0);
}
