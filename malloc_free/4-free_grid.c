#include "main.h"
#include <stdlib.h>

/**
 * releaseGrid - Deallocates memory used by a 2D grid.
 * @grid: The 2D array of integers.
 * @height: The height of the grid.
 *
 * This function frees the memory allocated for the grid and its rows.
 */
void releaseGrid(int **grid, int height)
{
if (grid != NULL && height > 0)
{
for (int row = 0; row < height; row++)
{
free(grid[row]);
}
free(grid);
}
}

