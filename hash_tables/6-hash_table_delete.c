#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
return;

for (unsigned long int i = 0; i < ht->size; ++i)
{
hash_node_t *current = ht->array[i];
while (current != NULL)
{
hash_node_t *next = current->next;
free(current->key);
free(current->value);
free(current);
current = next;
}
}

free(ht->array);
free(ht);
}
