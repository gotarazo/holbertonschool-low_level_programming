#include "holberton.h"

/**
* read_textfile- Reads a text file and prints it to POSIX stdoutput
* @filename: Pointer to name of file
* @letters: Number of letters the function it read and print
* Return: w (actual number of letters or 0 (If function fails or filename NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buff, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buff);
return (0);
}
free(buff);
close(o);
return (w);
}
