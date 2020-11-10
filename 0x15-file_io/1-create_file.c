#include "holberton.h"

/**
* create_file- Creates a file
* @filename: Filename to create
* @text_content: Text to copy into new file
* Return: 1 if success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int f, er, len;

if (!filename)
return (-1);
f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (f < 0)
return (-1);

while (text_content && *(text_content + len))
len++;
er = write(f, text_content, len);
close(f);
if (er < 0)
return (-1);

return (1);
}
