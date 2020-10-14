#include "holberton.h"

/**
* free_grid- Free a 2 dimensional grid
* @grid: 2 dimensional array of integer numbers
* @height: Height array
*/

void free_grid(int **grid, int height)
{
int n;

for (n = 0; n < height; n++)
free(grid[n]);

free(grid);
}
