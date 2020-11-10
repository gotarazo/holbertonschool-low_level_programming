#include "holberton.h"

/**
* append_text_to_file- appends text at the end of a file
* @filename: the filename to open and append to
* @text_content: text to append onto new file
* Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f, er, len;

if (!filename)
return (-1);
f = open(filename, O_RDWR | O_APPEND);
if (f < 0) /* failed opening file */
return (-1);

if (!text_content)
{ /* there is a file, but no new content to write to it */
close(f);
return (1);
}
while (*(text_content + len))
len++;
er = write(f, text_content, len);
close(f);
if (er < 0)
return (-1);

return (1);
}
