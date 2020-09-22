#include "holberton.h"

/**
 * print_alphabet -For loop prints the alphabet, in lowercase
 * Return: 0
 */

int print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
return (0);
}
