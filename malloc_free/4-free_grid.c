#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The 2D array of integers to be freed.
 * @height: The height of the grid.
 *
 * This function deallocates the memory used by the grid and its rows.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (int i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

