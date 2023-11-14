#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2-dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to the allocated array or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	gridout = (int **)malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = (int *)malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(gridout[i]);
			}
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridout[i][j] = 0;
		}
	}

	return (gridout);
}
