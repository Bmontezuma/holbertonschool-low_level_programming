#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and initialize to zero
 * @nmemb: The number of elements in the array
 * @size: The size in bytes of each element
 *
 * Return: If successful, a pointer to the allocated memory; otherwise, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (unsigned int i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}

