#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - Retrieve the value associated with key.
 * @ht: The hash table
 * @key: Key to search for.
 *
 * Return: value of key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
	if (strcmp(current->key, key) == 0)
		return (current->value);
	current = current->next;
	}

	return (NULL);
}

