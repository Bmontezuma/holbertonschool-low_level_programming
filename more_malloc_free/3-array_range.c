#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers within a specified range
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to created array, or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

