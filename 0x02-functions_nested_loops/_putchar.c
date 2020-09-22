#include <unistd.h>

/**
* _putchar -Print the char c to stdout
* @c: Char
* Return: 1 if succes
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
