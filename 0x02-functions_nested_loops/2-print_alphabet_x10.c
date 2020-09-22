#include "holberton.h"

/**
* print_alphabet_x10 -For loop prints the alphabet, in lowercase
* Description: Function use _putchar twice
* Return: 0
*/

void print_alphabet_x10(void)
{
int veces;
char alpha;
for (veces = 1; veces <= 10; veces++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
 }
_putchar('\n');
}
}
