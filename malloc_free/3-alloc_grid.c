#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D grid of integers and initialize to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

