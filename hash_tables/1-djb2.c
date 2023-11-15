#include <stdlib.h>

/**
 * hash_djb2 - Hash function implementing the algorithm
 * @str: The string to hash
 *
 * Return: The hash value for the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

		return (hash);
}

