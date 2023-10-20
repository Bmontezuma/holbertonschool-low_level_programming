#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Terminate with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b); /* Allocate memory using malloc */

	if (ptr == NULL)
	{
		exit(98); /* Terminate the program with status 98 if malloc fails */
	}

	return (ptr);
}

