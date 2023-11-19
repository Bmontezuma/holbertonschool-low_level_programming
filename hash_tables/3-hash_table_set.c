#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the table.
 * @ht: The hash table to add/update the key/value to
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = malloc(strlen(key) + 1);/* key_index.c */

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
	new_node->value = (new_node->key) ? strdup(value) : NULL;

	if (!new_node->key || !new_node->value)
	{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

		return (1);
}

