#include "holberton.h"

/**
* print_chessboard- Prints the chessboard
* @a: Array in 2D
*/

void print_chessboard(char (*a)[8])
{
int count1, count2;

for (count1 = 0; count1 < 8; count1++)
{
for (count2 = 0; count2 < 8; count2++)
{
_putchar(a[count1][count2]);
}
_putchar('\n');
}
}
