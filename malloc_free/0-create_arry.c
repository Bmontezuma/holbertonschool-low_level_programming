#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array and initialize it with a character.
 * @size: Size of the array.
 * @c: Character for initialization.
 *
 * Return: Pointer to the new array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

