#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key string
 * @size: The size of the hash table array
 *
 * Return: Index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

