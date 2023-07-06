#include "hash_tables.h"

/**
 * create_hash_table - Creates a new hash table.
 * @size: The size of the array.
 *
 * Returns: If the hash table creation is successful
 * - a pointer to the new hash table.
 * If an error occurs - NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
